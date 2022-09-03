#include "raylib.h"
#include <iostream>
using namespace std;

int main(void){
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "The Sand Particle");

    Vector2 grainPos[100];
    Vector2 grainVelocity[100];
    Color sandColor = { 232, 206, 8, 1 };
    SetTargetFPS(60);

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {

        }
    }

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(BLACK);
        //aplie physics and draw to screen
        for (int i = 0; i < 100; i++) {
                DrawCircleSector(grainPos[i], 1, 0, 361, 1, sandColor);
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}