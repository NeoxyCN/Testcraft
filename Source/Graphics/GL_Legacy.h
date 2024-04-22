// legacy

#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include "../Game/Game.h"

class GL {

public:
	GLFWwindow* Window=NULL;

	GL() {};
	GL(int width,int height,const char* title);
	~GL();
};
