#pragma once

#include <initializer_list>
#include <algorithm>
#include <cmath>

#include "ShapeType.h"
#include "Point.h"

class Shape
{
public:
	static const int line = 0;
	static const int sqr = 1;
	static const int cube = 2;
	Shape() = default;
	Shape(ShapeType _type, std::initializer_list<Point> list);
	
	ShapeType getType() { return type; }

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
