#define _CRT_SECURE_NO_WARNINGS

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include "Game.h"
#include "../Utils/Global.h"
#include "../Utils/LOG.h"
#include "../Window/Window.h"
#include "../Render/Render.h"
#include "../GUI/GUI.h"

void FrameCallback(GLFWwindow* window, int width, int height);

namespace Game {
	GLFWwindow* Window;

	void Run(int argc, char* argv[]) {
		Game::Init(argc, argv);
		Game::Loop();
	}

	void Init(int argc,char* argv[]) {
		//TODO: Get graphics type

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

		GUI::Widget widget(0, 0);

		glfwMakeContextCurrent(Window);
		//TODO: param for glewExp
		glewExperimental = true;
		glfwSetFramebufferSizeCallback(Window, FrameCallback);

		if (glewInit() != GLEW_OK) {
			LOG::ERROR("Failed to initialize GLEW", "GL");
			glfwTerminate();
			Game::Exit(2);
		}


		glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

		// 启用深度测试  
		glEnable(GL_DEPTH_TEST);

		// 配置视口  
		glViewport(0, 0, 800, 600);

		// 设置投影矩阵  
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluPerspective(45.0f, (GLfloat)800.0 / (GLfloat)600.0, 0.1f, 100.0f);

		// 设置模型视图矩阵  
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		gluLookAt(3.0f, 3.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);

	}

	//游戏循环
	void Loop(){
		while (!glfwWindowShouldClose(Window)) {
			Window::Key(Window);
			
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

			// 启用背面剔除  
			glEnable(GL_BACK);

			// 绘制立方体  
			glBegin(GL_QUADS); // 开始绘制由四个顶点组成的图形  

			//// 绘制立方体前面  
			//glNormal3f(0.0f, 0.0f, 1.0f);
			//glVertex3f(1.0f, 1.0f, -1.0f);
			//glVertex3f(-1.0f, 1.0f, -1.0f);
			//glVertex3f(-1.0f, -1.0f, -1.0f);
			//glVertex3f(1.0f, -1.0f, -1.0f);

			// 绘制立方体后面
			glNormal3f(0.0f, 0.0f, -1.0f);
			glVertex3f(1.0f, -1.0f, 1.0f);
			glVertex3f(-1.0f, -1.0f, 1.0f);
			glVertex3f(-1.0f, 1.0f, 1.0f);
			glVertex3f(1.0f, 1.0f, 1.0f);

			// 绘制立方体左侧面  
			//glNormal3f(-1.0f, 0.0f, 0.0f);
			//glVertex3f(-1.0f, 1.0f, 1.0f);
			//glVertex3f(-1.0f, 1.0f, -1.0f);
			//glVertex3f(-1.0f, -1.0f, -1.0f);
			//glVertex3f(-1.0f, -1.0f, 1.0f);

			// 绘制立方体右侧面  
			//glNormal3f(1.0f, 0.0f, 0.0f);
			//glVertex3f(1.0f, 1.0f, -1.0f);
			//glVertex3f(1.0f, 1.0f, 1.0f);
			//glVertex3f(1.0f, -1.0f, 1.0f);
			//glVertex3f(1.0f, -1.0f, -1.0f);

			// 绘制立方体顶部  
			//glNormal3f(0.0f, 1.0f, 0.0f);
			//glVertex3f(1.0f, 1.0f, -1.0f);
			//glVertex3f(-1.0f, 1.0f, -1.0f);
			//glVertex3f(-1.0f, 1.0f, 1.0f);
			//glVertex3f(1.0f, 1.0f, 1.0f);

			//// 绘制立方体底部  
			//glNormal3f(0.0f, -1.0f, 0.0f);
			//glVertex3f(1.0f, -1.0f, 1.0f);
			//glVertex3f(-1.0f, -1.0f, 1.0f);
			//glVertex3f(-1.0f, -1.0f, -1.0f);
			//glVertex3f(1.0f, -1.0f, -1.0f);

			glEnd(); // 结束绘制  




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

void EnvDoctor() {

}