#include "raylib.h"

namespace ReyesCuadra
{
	// main is declared extern "C" so it keeps its global name and the linker
	// still finds it as the program entry point, even though it lives inside our namespace
	extern "C" int main()
	{
		InitWindow(1024, 768, "Asteroids");
		SetTargetFPS(60);

		while (!WindowShouldClose())
		{
			BeginDrawing();
			ClearBackground(BLACK);
			DrawText("raylib integrada!", 400, 370, 20, RAYWHITE);
			EndDrawing();
		}

		CloseWindow();
		return 0;
	}
}
