#define _CRT_SECURE_NO_WARNINGS

#include "Global.h"
#include "LOG.h"


int main() {
	LOG::INFO(GetVerisonInfo());
	LOG::INFO("Initializing Testcraft");

	return 0;
}