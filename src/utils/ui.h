#pragma once

#include "raylib.h"

// Small reusable UI helpers (buttons and centered text) used by every screen.
namespace ReyesCuadra::ui
{
	struct Button
	{
		Rectangle bounds;
		const char* text;
	};

	// Creates a button horizontally centered on the screen at the given height.
	Button CreateCenteredButton(float positionY, float width, float height, const char* text);

	bool IsButtonHovered(const Button& button);
	bool IsButtonClicked(const Button& button);
	void DrawButton(const Button& button);

	// Draws a text horizontally centered on the screen.
	void DrawCenteredText(const char* text, int positionY, int fontSize, Color color);
}
