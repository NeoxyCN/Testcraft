#include "Window.h"

#include "Game.h"

namespace Window {
	void Key(GLFWwindow* window) {
		if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		{
			glfwSetWindowShouldClose(window, true);
		}

		if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) {
			glTranslatef(0.1, 0.1, 0.1);
		}

		if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) {
			glTranslatef(-0.1, -0.1, -0.1);
		}
	}
}