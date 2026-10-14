#pragma once

// Global configuration values shared by the whole game.
// Keeping them in one place avoids "magic numbers" spread across the code.
namespace ReyesCuadra::config
{
	// Window
	constexpr int SCREEN_WIDTH = 1024;
	constexpr int SCREEN_HEIGHT = 768;
	constexpr int TARGET_FPS = 60;

	// Game info (shown to the player)
	constexpr const char* GAME_TITLE = "Asteroids";
	constexpr const char* GAME_VERSION = "v0.1";
	constexpr const char* AUTHOR_NAME = "Valentin Reyes";
}
