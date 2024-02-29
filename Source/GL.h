#pragma once

#include "GLFW/glfw3.h"
#include "GL/glew.h"

class GL {

public:
	GLFWwindow* Window;
	GL(int width,int height,const char* title);

private:
	void InitESCKey();
};