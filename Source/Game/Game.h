#pragma once

//TODO: use #define GAME_H_ to make this project could be complied by other compliers

namespace Game {
	enum Graphics {
		OpenGL_Legacy,
		OpenGL,
		OpenGLES,
		Vulkan,
		DirectX,
		Metal,
		WebGL,
		WebGPU
	};

	//bool ShouldStop = false;

	void Run(int argc, char* argv[]);
	void Init(int argc, char* argv[]);
	void Loop();
	int Exit(int status = 0);
}