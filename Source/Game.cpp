#define _CRT_SECURE_NO_WARNINGS

#include "Game.h"
#include "Global.h"
#include "LOG.h"
#include "GL.h"

namespace Game {
	GL gl;

	void Run(int argc, char* argv[]) {
		//LOG::INFO(GetVerisonInfo());
		Game::Init(argc, argv);
		Game::Loop();
	}

	void Init(int argc,char* argv[]) {
		const int _width = 800;
		const int _height = 600;
		const char* _title = "Testcraft";

		LOG::INFO(GetVerisonInfo());
		LOG::INFO("Initializing Testcraft");
		GL gl(_width, _height, _title);
	}

	void Loop(){
		while (glfwWindowShouldClose(gl.Window)) {

		}
	}

	// Exit code
	// 0	Normal
	// 1	Fail to initialize GLFW
	// 2	Fail to initialize GLEW
	int Exit(int status) {
		//TODO: Clean memory
		return status;
	}
}