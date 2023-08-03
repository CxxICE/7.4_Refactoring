#define _USE_MATH_DEFINES
#include "shape.h"


Shape::Shape(ShapeType _type, std::initializer_list<Point> list)
{
	type = _type;
	int a = 0;
	int b = 0;
	int c = 0;
	auto It = list.begin();
	
	switch (type)
	{
	case ShapeType::line:
		
		p1 = *It++;
		p2 = *It;
		square = 0;
		volume = 0;
		break;
	case ShapeType::sqr:
		p1 = *It++;
		p2 = *It++;
		p3 = *It++;
		p4 = *It;
		a = abs(p1.x - p2.x);
		b = abs(p1.y - p2.y);
		square = a * b;
		volume = 0;
		break;
	case ShapeType::cube:
		p1 = *It++;
		p2 = *It++;
		p3 = *It++;
		p4 = *It++;
		p5 = *It++;
		p6 = *It++;
		p7 = *It++;
		p8 = *It;
		a = abs(p1.x - p2.x);
		b = abs(p1.y - p2.y);
		c = abs(p1.z - p2.z);
		square = 2 * a * b + 2 * a * c + 2 * b * c;
		volume = a * b * c;
		break;
	default:
		break;
	}
}
