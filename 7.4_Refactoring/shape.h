#pragma once

#include <initializer_list>
#include <algorithm>
#include <cmath>
#include <iostream>

#include "ShapeType.h"
#include "Point.h"

class Shape
{
public:
	virtual double getVolume() = 0;
	virtual double getSquare() = 0;
	virtual Shape *shift(int m, int n, int k) = 0;
	virtual Shape *scaleX(int a) = 0;
	virtual Shape *scaleY(int d) = 0;
	virtual Shape *scaleZ(int e) = 0;
	virtual Shape *scale(int s) = 0;
	static Shape *create(ShapeType type, std::initializer_list<Point> list);
	virtual int getX(int index) = 0;
	virtual int getY(int index) = 0;
	virtual int getZ(int index) = 0;
};
