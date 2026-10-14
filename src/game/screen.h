#pragma once

namespace ReyesCuadra::game
{
	// Every screen the game can be in.
	// Each screen's Update() returns the screen the game should be in next frame,
	// so screens never need to know how the others work.
	enum class Screen
	{
		Menu,
		Gameplay,
		Credits,
		Exit
	};
}
