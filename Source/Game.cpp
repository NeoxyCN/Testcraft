#define _CRT_SECURE_NO_WARNINGS

#include "Game.h"

#include "Global.h"
#include "LOG.h"

namespace Game {
	void Run(int argc, char* argv[]) {

	}

	void Init(int argc,char* argv[]) {
		LOG::INFO(GetVerisonInfo());
		LOG::INFO("Initializing Testcraft");
	}

	bool InitOpenGL() {

	}

	void Loop(){
		while (0)
		{

		}
	}

	int Exit() {

		return 0;
	}
}