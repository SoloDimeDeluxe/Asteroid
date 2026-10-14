#pragma once

#include "game/screen.h"

namespace ReyesCuadra::gameplay
{
	// Resets the match (called every time we enter the gameplay screen).
	void Init();
	game::Screen Update();
	void Draw();
}
