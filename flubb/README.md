
## Running it in the simulator

This works:

```
pio run -e simulator_x4_pro -t run_simulator
```

But this is faster after it can build once successfully, but it runs a lot more quietly so you can't tell it's compiling other than your battery and fan.

```
crosspoint-reader-shell -c './scripts_local/sim.sh'
```

## Clang Language Server

It's full of errors because it doesn't know where to include things. Apparently if you run this:

```
pio run -e simulator_x4_pro -t compiledb
```

It'll make something, and then restarting the clang language server is happy again.
