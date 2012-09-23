#include "Triangle.h"
#include <string>
#include <cmath>

std::string Triangle::draw()
{
	return "drew a triangle";
}

Triangle::Triangle(float a, float b, float c)
{
	sideA = a;
	sideB = b;
	sideC = c;
}

float Triangle::area()
{
	return sqrtf( (sideA + sideB + sideC) * (-sideA + sideB + sideC) * (sideA - sideB + sideC) * (sideA + sideB - sideC) / 16 );
}
