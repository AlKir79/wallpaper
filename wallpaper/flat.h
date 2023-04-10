#pragma once
#include <string>
#include"room.h"

class flat
{
private:
	room* rooms;
	int size;

public:
	flat() {
		this->size = 3;
		this->rooms = new room[size];
	}
	flat(int roomSize, room* arRooms) {
		this->size = roomSize;
		this->rooms = arRooms;
	}
};

