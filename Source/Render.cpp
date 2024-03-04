#include "Render.h"

namespace Render {
	namespace Block {
		void Draw(int x, int y, int z, int TextureID) {
			glBegin(GL_QUADS);

			//top
			glColor3f(1.0, 0.0, 0.0);
			glVertex3f(0.0, 1.0, 0.0);
			glColor3f(0.0, 1.0, 0.0);
			glVertex3f(-1.0, -1.0, 0.0);
			glColor3f(0.0, 0.0, 1.0);
			glVertex3f(1.0, -1.0, 0.0);
			glColor3f(1.0, 0.3, 0.8);
			glVertex3f(1.0, 1.0, 0.0);

			//bottom

			//front

			//back

			//right

			//left

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