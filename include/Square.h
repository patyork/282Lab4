#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"
#include <string>

//Specification for the Circle class
class Square : public Shape
{

	public:
		Square(float);
		std::string draw();
		float area();

	private:
		float side;
		

};

#endif
