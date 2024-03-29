#include "Render.h"

namespace Render {
	namespace Block {
		void Draw(int x, int y, int z, int TextureID) {

			GLfloat v[][3] = {
				{0,0,0},
				{1,0,0},
				{1,1,0},
				{0,1,0},
				{0,1,1},
				{0,0,1},
				{1,0,1},
				{1,1,1}
			};

			GLfloat index[][4] = {
				0,1,2,3,
				0,1,6,5,
				1,2,7,6,
				3,2,7,4,
				4,5,6,7,
				0,3,4,5
			};

			GLfloat colors[][3] = {
				{0, 0, 0},
				{1, 0, 0},
				{1, 1, 0},
				{0, 1, 0},
				{0, 0, 1},
				{1, 0, 1},
				{1, 1, 1},
				{0, 1, 1}
			};

			glBegin(GL_QUADS);

			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 3; j++)
				{

				}
			}
			
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