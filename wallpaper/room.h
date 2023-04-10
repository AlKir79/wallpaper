#pragma once
#include <string>
#include "wall.h"

using namespace std;
class room
{
private:
	float x;
	float y;
	float z;
	bool roof;
	string name;
	Wall paper;
public:
	room() {
		this->x = 500;
		this->y = 250;
		this->z = 800;
		this->roof = false;
		this->name = "Dinner";
	}
	room(float x, float y, float z, bool roof, string name, Wall paper) {
		this->x = x;
		this->y = y;
		this->z = z;
		this->roof = roof;
		this->name = name;
		this->paper = paper;
	}

		void getQuantWall(room rooms, Wall paper);
};

