#include "Circle.h"
#include <string>

const float PI = 3.14159265f;

std::string Circle::draw()
{
	return "drew a circle";
}

Circle::Circle(float r)
{
	radius = r;
}

float Circle::area()
{
	return radius * radius * PI;
}
