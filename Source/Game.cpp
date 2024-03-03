#define _CRT_SECURE_NO_WARNINGS

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include "Game.h"
#include "Global.h"
#include "LOG.h"
#include "Window.h"

void FrameCallback(GLFWwindow* window, int width, int height);

namespace Game {
	GLFWwindow* Window;

	void Run(int argc, char* argv[]) {
		Game::Init(argc, argv);
		Game::Loop();
	}

	void Init(int argc,char* argv[]) {
		LOG::INFO(GetVerisonInfo());
		LOG::INFO("Initializing Testcraft");

		const int _width = 800;
		const int _height = 600;
		const char* _title = "Testcraft";

		glfwInit();

		//TODO: Set GLFW version
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
		//glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

		Window = glfwCreateWindow(_width, _height, _title, NULL, NULL);
		if (Window == NULL) {
			LOG::ERROR("Failed to create GLFW window", "GL");
			glfwTerminate();
			Game::Exit(1);
		}

		glfwMakeContextCurrent(Window);
		//TODO: param for glewExp
		glewExperimental = true;
		glfwSetFramebufferSizeCallback(Window, FrameCallback);

		if (glewInit() != GLEW_OK) {
			LOG::ERROR("Failed to initialize GLEW", "GL");
			glfwTerminate();
			Game::Exit(2);
		}


	}

	void Loop(){
		while (!glfwWindowShouldClose(Window)) {
			Window::Key(Window);
			
			//glClearColor(1.f, 1.f, 0.f, 1.f);
			//glClear(GL_COLOR_BUFFER_BIT);
			glBegin(GL_TRIANGLES);

			glColor3f(1.0, 0.0, 0.0);
			glVertex3f(0.0, 1.0, 0.0);

			glColor3f(0.0, 1.0, 0.0);
			glVertex3f(-1.0,-1.0,0.0);

			glColor3f(0.0, 0.0, 1.0);
			glVertex3f(1.0, -1.0, 0.0);



			glEnd();

			glfwSwapBuffers(Window);
			glfwPollEvents();
		}
	}

	// Exit code
	// 0	Normal
	// 1	Fail to initialize GLFW
	// 2	Fail to initialize GLEW
	int Exit(int status) {
		glfwDestroyWindow(Window);
		glfwTerminate();

		return status;
	}
}

void FrameCallback(GLFWwindow* window, int width, int height) {
	glViewport(0, 0, width, height);
}