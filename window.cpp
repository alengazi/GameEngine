#include "window.h"


namespace engino {
	namespace graphics {

		void windowResize(GLFWwindow *window, int width, int height); //
		Window::Window(const char *name, int width, int height)
		{
			m_Name = name;
			m_Width = width;
			m_Height = height;
			//init();
			if (!init()) {
				glfwTerminate();
			}
		}
		Window::~Window()
		{
			glfwTerminate();
		}

		bool Window::init() {
			if (!glfwInit()) {
				std::cout << "Failed to initialize glfw" << std::endl;
				return false;
			}
			else {
				m_window = glfwCreateWindow(m_Width, m_Height, m_Name, NULL, NULL);
				if (!m_window) {
					glfwTerminate();
					std::cout << "Failed to create gfwl window" << std::endl;
					return false;
				}
				glfwMakeContextCurrent(m_window);
				//glfwSetWindowSizeCallback(m_window, windowResize); //
			}
		}
		void Window::clear() const {
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		}


		/*void windowResize(GLFWwindow *window, int width, int height) { //
			glViewport(0, 0, width, height);*/

		
	
		void Window::update() {
			glfwSwapBuffers(m_window);
			glfwGetFramebufferSize(m_window, &m_Width, &m_Height);
			glfwPollEvents();
			
		}
		bool Window::closed() const {

			return glfwWindowShouldClose(m_window) == 1;
		}
	}


	}
