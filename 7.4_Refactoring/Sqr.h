#pragma once

#include <initializer_list>
#include <algorithm>
#include <cmath>

#include "shape.h"
#include "Point.h"

class Sqr : public Shape
{
public:
	Sqr();
	Sqr(std::initializer_list<Point> list);

	double getVolume() override;
	double getSquare() override;
	Shape *shift(int m, int n, int k) override;
	Shape *scaleX(int a) override;
	Shape *scaleY(int d) override;
	Shape *scaleZ(int e) override;
	Shape *scale(int s) override;
	int getX(int index) override;
	int getY(int index) override;
	int getZ(int index) override;
private:	
	static const int points = 4;
	Point p[points];
};

