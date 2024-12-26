#include "raylib.h"
#include <stdint.h>
#include <stdlib.h>
#define CLAY_IMPLEMENTATION
#include "clay.h"
#include "renderers/raylib/clay_renderer_raylib.c"

int main(void) {
  Clay_Raylib_Initialize(800, 600, "Clay Example", FLAG_WINDOW_RESIZABLE);

  uint64_t clayRequiredMemory = Clay_MinMemorySize();
  Clay_Arena clayMemory = (Clay_Arena){.memory = malloc(clayRequiredMemory),
                                       .capacity = clayRequiredMemory};

  Clay_Initialize(clayMemory, (Clay_Dimensions){800, 600}, Clay__errorHandler);

  while (!WindowShouldClose()) {
    // Run once per frame

    Clay_BeginLayout();
    // Build Layout
    CLAY(CLAY_RECTANGLE({.color = {255, 0, 0, 255}}),
         CLAY_LAYOUT({.sizing = {.width = CLAY_SIZING_GROW(),
                                 .height = CLAY_SIZING_GROW()}})) {}

    Clay_RenderCommandArray renderCommands = Clay_EndLayout();

    BeginDrawing();
    ClearBackground(BLACK);
    Clay_Raylib_Render(renderCommands);
    EndDrawing();
    // End Layout here
  }
}
