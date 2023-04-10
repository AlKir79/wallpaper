#pragma once
#include <string>
using namespace std;
class Wall
{
private:
	int height;
	int width;
	int price;
	string name;
public:
	Wall() {
		this->height = 1000;
		this->width = 53;
		this->price = 1500;
		this->name = "Aqua";
	}
	Wall(int height, int width, int price, string name) {
		this->height = height;
		this->width = width;
		this->price = price;
		this->name = name;
	}
	int getSqureWall(Wall paper);
};

