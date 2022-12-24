#include <emscripten.h>
#include <stdlib.h>
#include "consoleLog.h"

void gameLoop(void *args)
{
	consolePrint("Game loop");
}

int main(){

	//Define a method to be called repeatedly, as a game loop.
	int infinite_loop = 1;
	// Call the function as fast as the browser wants to render
	// (typically 60fps):
	int fps = -1;
	// This is a function from emscripten.h, it sets a C function
	// as the main event loop for the calling thread:

	emscripten_set_main_loop_arg(gameLoop,0, fps, infinite_loop);
	consolePrint("Module initialized");
	return 0;
}

