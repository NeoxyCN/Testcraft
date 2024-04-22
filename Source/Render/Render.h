#pragma once

#include "GL/glew.h"
#include "GLFW/glfw3.h"



namespace Render {
	namespace Block {
		void Draw(int x, int y, int z, int TextureID);
		void DrawTexture(int x, int y, int z, int TextureID);
	}

	namespace GUI {
		void Container();
		void Label();
		void Button();
		void List();
		void Scrollbar();
		void Image();


		namespace Group{
			void Toolbar();
			void MainMenu();
			void WorldMenu();
			void SettingMenu();
			void PauseMenu();
			void DebugInfo();
			void Chat();
			void Inventory();
		}
	}

	namespace Player {

	}

	namespace World {
		namespace Skybox {

		}
	}

	namespace Entity {

		template<typename T>
		T Et(T i) {

		}

		namespace Item {
			void Draw();
		}

		namespace Animal {
			void Draw();
		}

		namespace Plant{
			void Draw();
		}
	}
}