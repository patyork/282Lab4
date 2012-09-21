#include "Square.h"
#include <string>

std::string Square::draw()
{
	return "drew a square";
}

Square::Square(float s)
{
	side = s;
}

float Square::area()
{
	return side * side;
}
