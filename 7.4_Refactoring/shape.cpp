#include "shape.h"
#include "Line.h"
#include "Sqr.h"
#include "Cube.h"

Shape *Shape::create(ShapeType type, std::initializer_list<Point> list)
{
	switch (type)
	{
		case ShapeType::line:
			return new Line(list);
			break;
		case ShapeType::sqr:
			return new Sqr(list);
			break;
		case ShapeType::cube:
			return new Cube(list);
			break;
		default:
			return nullptr;
			break;
	}
}
