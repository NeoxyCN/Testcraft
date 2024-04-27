#include "GUI.h"


#include "../Graphics/GL_Legacy.h"

GUI::Widget::Widget(float x, float y)
{
	status= NONE;
	
	//TODO: GUI basic
	//draw gui here
	//...

	//bind callback function
	//...
}

GUI::Widget::~Widget()
{
}

void GUI::Widget::Click(float x, float y) {
	
}

void GUI::Widget::Click_Down(float x, float y) {
	status = CLICK_DOWN;
}

void GUI::Widget::Click_Up(float x, float y) {
	status = CLICK_UP;
}