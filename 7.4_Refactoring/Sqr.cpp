#include "Sqr.h"

Sqr::Sqr()
{
	for (int i = 0; i < points; ++i)
	{
		p[i] = { 0,0,0 };
	}
}

Sqr::Sqr(std::initializer_list<Point> list)
{
	auto It = list.begin();
	p[0] = *It++;
	p[1] = *It++;
	p[2] = *It++;
	p[3] = *It;
}
double Sqr::getVolume()
{
	return 0;
}
double Sqr::getSquare()
{
	return abs(p[0].x - p[1].x) * abs(p[0].y - p[1].y);
}
Shape *Sqr::shift(int m, int n, int k)
{
	Sqr *tmp = new Sqr(*this);
	tmp->p[0].x += m; tmp->p[0].y += n;
	tmp->p[1].x += m; tmp->p[1].y += n;
	tmp->p[2].x += m; tmp->p[2].y += n;
	tmp->p[3].x += m; tmp->p[3].y += n;
	return tmp;
}
Shape *Sqr::scaleX(int a)
{
	Sqr *tmp = new Sqr(*this);
	tmp->p[0].x *= a;
	tmp->p[1].x *= a;
	tmp->p[2].x *= a;
	tmp->p[3].x *= a;
	return tmp;
}
Shape *Sqr::scaleY(int d)
{
	Sqr *tmp = new Sqr(*this);
	tmp->p[0].y *= d;
	tmp->p[1].y *= d;
	tmp->p[2].y *= d;
	tmp->p[3].y *= d;
	return tmp;
}
Shape *Sqr::scaleZ(int e)
{
	Sqr *tmp = new Sqr(*this);
	tmp->p[0].z *= e;
	tmp->p[1].z *= e;
	tmp->p[2].z *= e;
	tmp->p[3].z *= e;
	return tmp;
}
Shape *Sqr::scale(int s)
{
	Sqr *tmp = new Sqr(*this);
	tmp->p[0].x /= s; tmp->p[0].y /= s;
	tmp->p[1].x /= s; tmp->p[1].y /= s;
	tmp->p[2].x /= s; tmp->p[2].y /= s;
	tmp->p[3].x /= s; tmp->p[3].y /= s;
	return tmp;
}
int Sqr::getX(int index)
{
	return p[index - 1].x;
}
int Sqr::getY(int index)
{
	return p[index - 1].y;
}
int Sqr::getZ(int index)
{
	return p[index - 1].z;
}
