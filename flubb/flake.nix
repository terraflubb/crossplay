# This is a copy of ../nix/flake.nix with changes to let us build the simulator
# Use with `nix develop -f flubb` / `nix-shell flubb` / `nix develop ./flubb`.

{
  description = "CrosspointPoint Reader development environment (with simulator's SDL2/OpenSSL deps)";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
    flake-compat.url = "github:NixOS/flake-compat";
  };

  outputs =
    { nixpkgs, ... }:
    let
      systems = [
        "x86_64-linux"
        "aarch64-linux"
      ];
      forAllSystems = nixpkgs.lib.genAttrs systems;
    in
    {
      devShells = forAllSystems (
        system:
        let
          pkgs = import nixpkgs { inherit system; };
          # Detect the project root from wherever the user entered the shell,
          # so commands work from the repository root or any subdirectory.
          # Using `git rev-parse` to do so (assuming git is installed
          # system-wide); user can overwrite this by setting PROJECT_ROOT env.

          setEnvs = ''
            PROJECT_ROOT="''${PROJECT_ROOT:-$(git rev-parse --show-toplevel 2>/dev/null || pwd)}"
            export PROJECT_ROOT
            export PLATFORMIO_CORE_DIR="$PROJECT_ROOT/.cache/platformio"
          '';
          fhsEnv = pkgs.buildFHSEnv {
            name = "crosspoint-reader-shell";

            targetPkgs =
              pkgs: with pkgs; [
                python3
                uv
                git
                openssh
                perl # scripts_local/lib-sim.sh calls shasum, which ships with perl

                # Runtime libraries used by PlatformIO's downloaded ESP32 toolchain binaries.
                stdenv.cc.cc.lib
                zlib
                ncurses

                # The simulator is built on SDL2, which in Nix is an SDL3 wrapper
                # so we need those, plus openssl since something uses libcrypto
                SDL2
                sdl3
                openssl
                openssl.dev

                # Bug number five: the simulator ran, logged normally, and no
                # window ever appeared. Two separate causes, both silent.
                #
                # (a) SDL3 dlopens its video backends at runtime, and none were
                # present here, so SDL had no usable video device at all.
                # wayland is for the session, X11 for the XWayland fallback.
                #
                # (b) libGL is libglvnd, a dispatch layer with no driver behind
                # it. Without mesa there is no GL vendor, so SDL_CreateRenderer
                # with SDL_RENDERER_ACCELERATED returns NULL. HalDisplay::begin()
                # does not check it, so every later present is a silent no-op --
                # and on Wayland a surface is only mapped once a buffer is
                # committed, so the window never becomes visible and nothing is
                # logged.
                wayland
                libxkbcommon
                libdecor
                libGL
                mesa
                libx11
                libxext
                libxcursor
                libxi
                libxrandr
                libxfixes
                libxscrnsaver

                # Bug numbers one and two: "can't find sdl2-config" (and later "can't find SDL.h")
                # The robot helped me with the hacks related to getting SDL2 to play
                # nice and build. We use pkg-config to get what we need. The first issue
                # was that it couldn't find `sdl2-config` and when it did, it was somehow
                # providing smmething stale, because it would fail later when none of the
                # includes were found. So this spoon-feeds what we need so that platformio
                # can use it to build things.
                pkg-config
                (pkgs.runCommand "sdl2-dev-headers-and-pc" { } ''
                  mkdir -p "$out/include" "$out/lib/pkgconfig"
                  cp -r ${pkgs.SDL2.dev}/include/. "$out/include"
                  cp -r ${pkgs.SDL2.dev}/lib/pkgconfig/. "$out/lib/pkgconfig"
                '')
                (pkgs.writeShellScriptBin "sdl2-config" ''
                  exec pkg-config --cflags --libs sdl2 "$@"
                '')
              ];

            profile = ''
              ${setEnvs}
              export PATH="$PROJECT_ROOT/.venv/bin:$PATH"

              # Bug number three:
              # ricmoo/QRCode code fails to build with gnu23 C dialect, used in
              # the default GCC 15. It has to do with some boolean typedefs at
              # the top of it. So we need to make sure specify an older GCC before
              # platformio uses the modern one.
              export PATH="${pkgs.gcc13}/bin:$PATH"
              export CC="${pkgs.gcc13}/bin/gcc"
              export CXX="${pkgs.gcc13}/bin/g++"

              # Make very sure the paths are correct, apparently this slipped once in the
              # debugging frenzy
              export PKG_CONFIG_PATH="/usr/lib/pkgconfig:/usr/share/pkgconfig''${PKG_CONFIG_PATH:+:$PKG_CONFIG_PATH}"

              # Bug number four: after it was all done, it couldn't find `SDL3` and errored out at
              # runtime. This makes sure our LD_LIBRARY_PATH includes what it needs.
              export LD_LIBRARY_PATH="${pkgs.stdenv.cc.cc.lib}/lib:${pkgs.sdl3}/lib''${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}"

              if [ ! -x "$PROJECT_ROOT/.venv/bin/pio" ]; then
                echo "Creating .venv and installing pioarduino PlatformIO Core..."
                # Forcing python3 from fhsEnv, otherwise we get the following
                # exception while running `pip check`
                # ModuleNotFoundError: No module named 'littlefs'
                uv venv --python /usr/bin/python3 "$PROJECT_ROOT/.venv" &&
                uv pip install --python "$PROJECT_ROOT/.venv/bin/python" \
                  -U https://github.com/pioarduino/platformio-core/archive/refs/tags/v6.1.19.zip \
                  -r "$PROJECT_ROOT/requirements.txt" ||
                echo "Failed to install pioarduino PlatformIO Core" >&2
              fi
            '';
          };
          pio = pkgs.writeShellScriptBin "pio" ''
            exec ${fhsEnv}/bin/crosspoint-reader-shell -c 'exec pio "$@"' pio "$@"
          '';
        in
        {
          default = pkgs.mkShell {
            packages = with pkgs; [
              pio
              fhsEnv
              clang-tools # for clang-format
              (python3.withPackages (ps: with ps; [ # for debugging monitor
                matplotlib
                pyserial
                colorama
              ]))
            ];

            shellHook = setEnvs;
          };
        }
      );
    };
}
