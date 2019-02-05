#define GLFW_INCLUDE_GLU
#include <glfw3.h>
#include "window.h"
#include <iostream>


int main() {
	using namespace engino;
	using namespace graphics;
	
	Window Window("Favelabro", 800, 600);
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);
	glClearColor(0,0,1,1);

	while (!Window.closed()) {
		std::cout << Window.getWidth() << "," << Window.getHeight() << std::endl;
		Window.clear();
		glClear(GL_COLOR_BUFFER_BIT);
		glBegin(GL_TRIANGLES);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(0.0f, 0.5f);
		glVertex2f(0.5f, -0.5f);
		glEnd();
		Window.update();
		glEnd();
	}
	return 0;

	if (!glfwInit())
		std::cout << "Error!" << std::endl;
	else
		std::cout << "Successfully loaded GLFW!" << std::endl;

	system("PAUSE");

	glfwTerminate();
	return 0;
	}


