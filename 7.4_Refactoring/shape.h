#pragma once

#include <initializer_list>
#include <algorithm>
#include <cmath>

#include "ShapeType.h"
#include "Point.h"

class Shape
{
public:
	Shape() = default;
	Shape(ShapeType _type, std::initializer_list<Point> list);
	
	ShapeType getType() { return type; }

	Shape shift(int m, int n, int k);
	Shape scaleX(int a);
	Shape scaleY(int d);
	Shape scaleZ(int e);
	Shape scale(int s);

	ShapeType type;
	Point p1 = { 0,0,0 },
		p2 = { 0,0,0 },
		p3 = { 0,0,0 },
		p4 = { 0,0,0 },
		p5 = { 0,0,0 },
		p6 = { 0,0,0 },
		p7 = { 0,0,0 },
		p8 = { 0,0,0 };
	
	
	double volume;
	double square;
};
