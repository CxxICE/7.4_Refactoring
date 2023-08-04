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

Shape Shape::shift(int m, int n, int k)
{
	Shape shape = *this;
	switch (shape.getType())
	{
	case ShapeType::line:
		shape.p1.x += m; shape.p1.y += n;
		shape.p2.x += m; shape.p2.y += n;
		break;
	case ShapeType::sqr:
		shape.p1.x += m; shape.p1.y += n;
		shape.p2.x += m; shape.p2.y += n;
		shape.p3.x += m; shape.p3.y += n;
		shape.p4.x += m; shape.p4.y += n;
		break;
	case ShapeType::cube:
		shape.p1.x += m; shape.p1.y += n; shape.p1.z += k;
		shape.p2.x += m; shape.p2.y += n; shape.p2.z += k;
		shape.p3.x += m; shape.p3.y += n; shape.p3.z += k;
		shape.p4.x += m; shape.p4.y += n; shape.p4.z += k;
		shape.p5.x += m; shape.p5.y += n; shape.p5.z += k;
		shape.p6.x += m; shape.p6.y += n; shape.p6.z += k;
		shape.p7.x += m; shape.p7.y += n; shape.p7.z += k;
		shape.p8.x += m; shape.p8.y += n; shape.p8.z += k;
		break;
	}
	return shape;
}

Shape Shape::scaleX(int a)
{
	Shape shape = *this;
	switch (shape.getType())
	{
	case ShapeType::line:
		shape.p1.x *= a;
		shape.p2.x *= a;
		break;
	case ShapeType::sqr:
		shape.p1.x *= a;
		shape.p2.x *= a;
		shape.p3.x *= a;
		shape.p4.x *= a;
		break;
	case ShapeType::cube:
		shape.p1.x *= a;
		shape.p2.x *= a;
		shape.p3.x *= a;
		shape.p4.x *= a;
		shape.p5.x *= a;
		shape.p6.x *= a;
		shape.p7.x *= a;
		shape.p8.x *= a;
		break;
	}
	return shape;
}

Shape Shape::scaleY(int d)
{
	Shape shape = *this;
	switch (shape.getType())
	{
	case ShapeType::line:
		shape.p1.y *= d;
		shape.p2.y *= d;
		break;
	case ShapeType::sqr:
		shape.p1.y *= d;
		shape.p2.y *= d;
		shape.p3.y *= d;
		shape.p4.y *= d;
		break;
	case ShapeType::cube:
		shape.p1.y *= d;
		shape.p2.y *= d;
		shape.p3.y *= d;
		shape.p4.y *= d;
		shape.p5.y *= d;
		shape.p6.y *= d;
		shape.p7.y *= d;
		shape.p8.y *= d;
		break;
	}
	return shape;
}

Shape Shape::scaleZ(int e)
{
	Shape shape = *this;
	switch (shape.getType())
	{
	case ShapeType::line:
		shape.p1.z *= e;
		shape.p2.z *= e;
		break;
	case ShapeType::sqr:
		shape.p1.z *= e;
		shape.p2.z *= e;
		shape.p3.z *= e;
		shape.p4.z *= e;
		break;
	case ShapeType::cube:
		shape.p1.z *= e;
		shape.p2.z *= e;
		shape.p3.z *= e;
		shape.p4.z *= e;
		shape.p5.z *= e;
		shape.p6.z *= e;
		shape.p7.z *= e;
		shape.p8.z *= e;
		break;
	}
	return shape;
}

Shape Shape::scale(int s)
{
	Shape shape = *this;
	switch (shape.getType())
	{
	case ShapeType::line:
		shape.p1.x /= s; shape.p1.y /= s;
		shape.p2.x /= s; shape.p2.y /= s;
		break;
	case ShapeType::sqr:
		shape.p1.x /= s; shape.p1.y /= s;
		shape.p2.x /= s; shape.p2.y /= s;
		shape.p3.x /= s; shape.p3.y /= s;
		shape.p4.x /= s; shape.p4.y /= s;
		break;
	case ShapeType::cube:
		shape.p1.x /= s; shape.p1.y /= s; shape.p1.z /= s;
		shape.p2.x /= s; shape.p2.y /= s; shape.p2.z /= s;
		shape.p3.x /= s; shape.p3.y /= s; shape.p3.z /= s;
		shape.p4.x /= s; shape.p4.y /= s; shape.p4.z /= s;
		shape.p5.x /= s; shape.p5.y /= s; shape.p5.z /= s;
		shape.p6.x /= s; shape.p6.y /= s; shape.p6.z /= s;
		shape.p7.x /= s; shape.p7.y /= s; shape.p7.z /= s;
		shape.p8.x /= s; shape.p8.y /= s; shape.p8.z /= s;
		break;
	}

	return shape;
}
