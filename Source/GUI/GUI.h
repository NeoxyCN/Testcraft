#pragma once
namespace GUI {
	class  Widget {

	public:
		enum State
		{
			NONE,

			CLICK_UP,
			CLICK_DOWN,
		};

		int status;

		// callback function
		Widget(float x, float y);
		~Widget();

		void Click(float x, float y);
		void Click_Down(float x,float y);
		void Click_Up(float x, float y);
		

	};

	class Container :Widget {

	};

	class Label :Container {

	};

	class Button :Container {

	};

	class List :Container {

	};

	class Image :Container {

	};


	class Scrollbar :Widget {

	};
}