#include "Render.h"


namespace Render {
	namespace Block {
		void Draw(int x, int y, int z, int TextureID) {
			
			glBegin(GL_QUADS); // 开始绘制由四个顶点组成的图形  

			//// 绘制立方体后面 back  
			//glNormal3f(0.0f, 0.0f, 1.0f);
			glVertex3f(1.0f, 1.0f, -1.0f);
			glVertex3f(-1.0f, 1.0f, -1.0f);
			glVertex3f(-1.0f, -1.0f, -1.0f);
			glVertex3f(1.0f, -1.0f, -1.0f);

			// 绘制立方体后面  front
			glNormal3f(0.0f, 0.0f, -1.0f);
			glVertex3f(1.0f, -1.0f, 1.0f);
			glVertex3f(-1.0f, -1.0f, 1.0f);
			glVertex3f(-1.0f, 1.0f, 1.0f);
			glVertex3f(1.0f, 1.0f, 1.0f);

			//绘制立方体左侧面  right
			//glNormal3f(-1.0f, 0.0f, 0.0f);
			glVertex3f(-1.0f, 1.0f, 1.0f);
			glVertex3f(-1.0f, 1.0f, -1.0f);
			glVertex3f(-1.0f, -1.0f, -1.0f);
			glVertex3f(-1.0f, -1.0f, 1.0f);

			// 绘制立方体右侧面  left
			//glNormal3f(1.0f, 0.0f, 0.0f);
			glVertex3f(1.0f, 1.0f, -1.0f);
			glVertex3f(1.0f, 1.0f, 1.0f);
			glVertex3f(1.0f, -1.0f, 1.0f);
			glVertex3f(1.0f, -1.0f, -1.0f);

			//// 绘制立方体顶部  top
			//glNormal3f(0.0f, 1.0f, 0.0f);
			glVertex3f(1.0f, 1.0f, -1.0f);
			glVertex3f(-1.0f, 1.0f, -1.0f);
			glVertex3f(-1.0f, 1.0f, 1.0f);
			glVertex3f(1.0f, 1.0f, 1.0f);

			//// 绘制立方体底部  bottom
			//glNormal3f(0.0f, -1.0f, 0.0f);
			glVertex3f(1.0f, -1.0f, 1.0f);
			glVertex3f(-1.0f, -1.0f, 1.0f);
			glVertex3f(-1.0f, -1.0f, -1.0f);
			glVertex3f(1.0f, -1.0f, -1.0f);
			glEnd();
		}

		void DrawTexture(int x, int y, int z, int TextureID) {

		}

	}

	namespace GUI {
		void Container() {

		}

		void Label() {

		}

		void Button() {

		}

		void List() {

		}

		void Scrollbar() {

		}

		void Image() {

		}

		namespace Group {
			void Toolbar() {

			}

			void MainMenu() {

			}

			void WorldMenu() {

			}

			void SettingMenu() {

			}

			void PauseMenu() {

			}

			void DebugInfo() {

			}

			void Chat() {

			}

			void Inventory() {

			}

		}
	}

	namespace Player {

	}

	namespace World {

	}

	namespace Entity {
		namespace Item {
			void Draw() {

			}
		}

		namespace Animal {
			void Draw() {

			}
		}

		namespace Plant {
			void Draw() {

			}
		}
	}
}