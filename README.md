## Clay Raylib renderer boilerplate

I thought it could be useful for absolute newcomers to C to have something you can build and run for Clay.

The code in main follows the first couple of minutes of the great Clay introductory vide ![intro video](https://www.youtube.com/watch?v=DYWTw19_8r4) from the creator of the library ![Nick Barker](https://github.com/nicbarker/clay)

### How to run

In your terminal, navigate to your root folder and run:

```bash
gcc -o example main.c renderers/raylib/clay_renderer_raylib.c -I. -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
```

This will compile the code, which you can run by:

```bash
./example
```

### Thanks and Credits

To ![Nick Barker](https://github.com/nicbarker/clay) for putting efforts into something so refreshing and powerful such as a layout library written in C...from scratch!

Also to the community over on their Discord for being helpful and welcoming :)
