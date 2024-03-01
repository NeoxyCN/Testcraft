#pragma once

namespace Game {
	enum Graphics {
		OpenGL,
		DirectX,
		Metal,
		Vulkan,
		OpenGLES,
		WebGL,
	};

	//bool ShouldStop = false;

	void Run(int argc, char* argv[]);
	void Init(int argc, char* argv[]);
	void Loop();
	int Exit(int status = 0);
}