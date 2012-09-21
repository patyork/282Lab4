#include "Shape.h"
#include <string>

//Specification for the Circle class
class Circle : public Shape
{

	public:
		Circle(float);
		std::string draw();
		float area();

	private:
		float radius;
		

};
