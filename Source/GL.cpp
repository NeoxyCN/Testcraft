#include "GL.h"

#include "LOG.h"
#include "Game.h"

GL::GL(int width, int height, const char* title) {
	glfwInit();

	//TODO: Set GLFW version
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GL::Window = glfwCreateWindow(width,height,title,NULL,NULL);
	if (Window == NULL) {
		LOG::ERROR("Failed to create GLFW window", "GL");
		glfwTerminate();
		Game::Exit(1);
	}

	glfwMakeContextCurrent(Window);
	//TODO: param for glewExp
	glewExperimental = true;
	
	if (glewInit() != GLEW_OK) {
		LOG::ERROR("Failed to initialize GLEW","GL");
		glfwTerminate();
		Game::Exit(2);
	}

	
}

GL::InitESCKey() {

}