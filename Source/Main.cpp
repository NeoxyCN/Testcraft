#include "Game.h"

//TODO: 修复Github Action使用vcpkg时的编译问题以及输出artifact

int main(int argc, char* argv[]) {
	Game::Run(argc, argv);

	Game::Exit(0);
}