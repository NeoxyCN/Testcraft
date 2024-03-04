#pragma once
namespace GUI {
	class  Widget {

	public:
		// callback function
		Widget(float x, float y);
		~Widget();

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