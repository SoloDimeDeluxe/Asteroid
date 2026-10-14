#include "game/game.h"

#include "raylib.h"

#include "game/screen.h"
#include "screens/credits.h"
#include "screens/gameplay.h"
#include "screens/menu.h"
#include "utils/config.h"

namespace ReyesCuadra::game
{
	// Internal state and helpers: the anonymous namespace makes them visible
	// only inside this file (other files can only call Run()).
	namespace
	{
		Screen currentScreen = Screen::Menu;

		// Switches to a new screen and initializes it, so every time we enter
		// a screen it starts from a clean state (ex: a new match in gameplay).
		void ChangeScreen(Screen newScreen)
		{
			currentScreen = newScreen;

			switch (currentScreen)
			{
			case Screen::Menu:
				menu::Init();
				break;
			case Screen::Gameplay:
				gameplay::Init();
				break;
			case Screen::Credits:
				credits::Init();
				break;
			case Screen::Exit:
				break;
			}
		}

		void Init()
		{
			InitWindow(config::SCREEN_WIDTH, config::SCREEN_HEIGHT, config::GAME_TITLE);
			SetTargetFPS(config::TARGET_FPS);

			// By default raylib closes the window when ESC is pressed.
			// We disable that so each screen decides what ESC does (back to menu, quit, etc.).
			SetExitKey(KEY_NULL);

			ChangeScreen(Screen::Menu);
		}

		// Updates only the active screen and changes screen if it asked to.
		void Update()
		{
			Screen nextScreen = currentScreen;

			switch (currentScreen)
			{
			case Screen::Menu:
				nextScreen = menu::Update();
				break;
			case Screen::Gameplay:
				nextScreen = gameplay::Update();
				break;
			case Screen::Credits:
				nextScreen = credits::Update();
				break;
			case Screen::Exit:
				break;
			}

			if (nextScreen != currentScreen)
			{
				ChangeScreen(nextScreen);
			}
		}

		// Draws only the active screen.
		void Draw()
		{
			BeginDrawing();
			ClearBackground(BLACK);

			switch (currentScreen)
			{
			case Screen::Menu:
				menu::Draw();
				break;
			case Screen::Gameplay:
				gameplay::Draw();
				break;
			case Screen::Credits:
				credits::Draw();
				break;
			case Screen::Exit:
				break;
			}

			EndDrawing();
		}

		void Close()
		{
			CloseWindow();
		}
	}

	void Run()
	{
		Init();

		// Main loop: runs until the window's X button is pressed
		// or a screen asks to exit the game.
		while (!WindowShouldClose() && currentScreen != Screen::Exit)
		{
			Update();
			Draw();
		}

		Close();
	}
}
