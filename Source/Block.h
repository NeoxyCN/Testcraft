#pragma once

#include <string>

struct Block
{
	std::string Name;
	int BlockID;
	int TextureID;
	int Hardness;

	bool isDrop;
	bool isAir;
};

float getDigTime(int BlockID);