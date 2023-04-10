#include "room.h"

void room::getQuantWall(room rooms, Wall paper)
{
	float square;
	if (roof) return ((this->x * this->y * 2 + this->z * this->y * 2)/getSquareWall);
	else square = this->x * this->y * 2 + this->z * this->y * 2 + this->x * this->z;

}
