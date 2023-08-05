#include "Line.h"

Line::Line()
{
	for (int i = 0; i < points; ++i)
	{
		p[i] = { 0,0,0 };
	}
}

Line::Line(std::initializer_list<Point> list)
{
	auto It = list.begin();
	p[0] = *It++;
	p[1] = *It;
}

double Line::getVolume()
{
	return 0;
}
double Line::getSquare()
{
	return 0;
}
Shape *Line::shift(int m, int n, int k)
{
	Line *tmp = new Line(*this);
	tmp->p[0].x += m; tmp->p[0].y += n;
	tmp->p[1].x += m; tmp->p[1].y += n;
	return tmp;
}
Shape *Line::scaleX(int a)
{
	Line *tmp = new Line(*this);
	tmp->p[0].x *= a;
	tmp->p[1].x *= a;
	return tmp;
}
Shape *Line::scaleY(int d)
{
	Line *tmp = new Line(*this);
	tmp->p[0].y *= d;
	tmp->p[1].y *= d;
	return tmp;
}
Shape *Line::scaleZ(int e)
{
	Line *tmp = new Line(*this);
	tmp->p[0].z *= e;
	tmp->p[1].z *= e;
	return tmp;
}
Shape *Line::scale(int s)
{
	Line *tmp = new Line(*this);
	tmp->p[0].x /= s; tmp->p[0].y /= s;
	tmp->p[1].x /= s; tmp->p[1].y /= s;
	return tmp;
}
int Line::getX(int index)
{
	return p[index - 1].x;
}
int Line::getY(int index)
{
	return p[index - 1].y;
}
int Line::getZ(int index)
{
	return p[index - 1].z;
}
