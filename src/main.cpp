#include "game/game.h"

namespace ReyesCuadra
{
	// main is declared extern "C" so it keeps its global name and the linker
	// still finds it as the program entry point, even though it lives inside our namespace.
	// It only starts the game: all the logic lives in game::Run().
	extern "C" int main()
	{
		game::Run();
		return 0;
	}
}
