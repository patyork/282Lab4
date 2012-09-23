#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"
#include <string>

//Specification for the Circle class
class Triangle : public Shape
{

	public:
		Triangle(float, float, float);
		std::string draw();
		float area();

	private:
		float sideA;
		float sideB;
		float sideC;
		

};

#endif
