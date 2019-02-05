#pragma 
#include <glfw3.h>
#include <iostream>

namespace engino {
	namespace graphics {
	
		class Window {

		private:
			const char *m_Name;
			int m_Width;
			int m_Height;
			GLFWwindow *m_window;
			bool m_Closed;

			public:
			Window(const char *name, int width, int height);
			~Window();
			void update();
			bool closed() const;
			void clear() const;

			inline int getWidth() const {return m_Width;}
			inline int getHeight() const {return m_Height; }

		private: /*private methods*/
			bool init();
		};
	
	}

	
}
