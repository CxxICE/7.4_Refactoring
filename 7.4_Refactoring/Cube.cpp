#include "Cube.h"

Cube::Cube()
{
	for (int i = 0; i < points; ++i)
	{
		p[i] = { 0,0,0 };
	}
}

Cube::Cube(std::initializer_list<Point> list)
{
	auto It = list.begin();
	p[0] = *It++;
	p[1] = *It++;
	p[2] = *It++;
	p[3] = *It++;
	p[4] = *It++;
	p[5] = *It++;
	p[6] = *It++;
	p[7] = *It;	
}

double Cube::getVolume()
{
	int a = abs(p[0].x - p[1].x);
	int b = abs(p[0].y - p[1].y);
	int c = abs(p[0].z - p[1].z);
	return a * b * c;
}
double Cube::getSquare()
{
	int a = abs(p[0].x - p[1].x);
	int b = abs(p[0].y - p[1].y);
	int c = abs(p[0].z - p[1].z);
	return 2 * a * b + 2 * a * c + 2 * b * c;
}
Shape *Cube::Cube::shift(int m, int n, int k)
{
	Cube *tmp = new Cube(*this);
	tmp->p[0].x += m; tmp->p[0].y += n; tmp->p[0].z += k;
	tmp->p[1].x += m; tmp->p[1].y += n; tmp->p[1].z += k;
	tmp->p[2].x += m; tmp->p[2].y += n; tmp->p[2].z += k;
	tmp->p[3].x += m; tmp->p[3].y += n; tmp->p[3].z += k;
	tmp->p[4].x += m; tmp->p[4].y += n; tmp->p[4].z += k;
	tmp->p[5].x += m; tmp->p[5].y += n; tmp->p[5].z += k;
	tmp->p[6].x += m; tmp->p[6].y += n; tmp->p[6].z += k;
	tmp->p[7].x += m; tmp->p[7].y += n; tmp->p[7].z += k;
	return tmp;
}
Shape *Cube::Cube::Cube::scaleX(int a)
{
	Cube *tmp = new Cube(*this);
	tmp->p[0].x *= a;
	tmp->p[1].x *= a;
	tmp->p[2].x *= a;
	tmp->p[3].x *= a;
	tmp->p[4].x *= a;
	tmp->p[5].x *= a;
	tmp->p[6].x *= a;
	tmp->p[7].x *= a;
	return tmp;
}
Shape *Cube::Cube::scaleY(int d)
{
	Cube *tmp = new Cube(*this);
	tmp->p[0].y *= d;
	tmp->p[1].y *= d;
	tmp->p[2].y *= d;
	tmp->p[3].y *= d;
	tmp->p[4].y *= d;
	tmp->p[5].y *= d;
	tmp->p[6].y *= d;
	tmp->p[7].y *= d;
	return tmp;
}
Shape *Cube::Cube::scaleZ(int e)
{
	Cube *tmp = new Cube(*this);
	tmp->p[0].z *= e;
	tmp->p[1].z *= e;
	tmp->p[2].z *= e;
	tmp->p[3].z *= e;
	tmp->p[4].z *= e;
	tmp->p[5].z *= e;
	tmp->p[6].z *= e;
	tmp->p[7].z *= e;
	return tmp;
}
Shape *Cube::Cube::scale(int s)
{
	Cube *tmp = new Cube(*this);
	tmp->p[0].x /= s; tmp->p[0].y /= s; tmp->p[0].z /= s;
	tmp->p[1].x /= s; tmp->p[1].y /= s; tmp->p[1].z /= s;
	tmp->p[2].x /= s; tmp->p[2].y /= s; tmp->p[2].z /= s;
	tmp->p[3].x /= s; tmp->p[3].y /= s; tmp->p[3].z /= s;
	tmp->p[4].x /= s; tmp->p[4].y /= s; tmp->p[4].z /= s;
	tmp->p[5].x /= s; tmp->p[5].y /= s; tmp->p[5].z /= s;
	tmp->p[6].x /= s; tmp->p[6].y /= s; tmp->p[6].z /= s;
	tmp->p[7].x /= s; tmp->p[7].y /= s; tmp->p[7].z /= s;
	return tmp;
}
int Cube::getX(int index)
{
	return p[index - 1].x;
}
int Cube::getY(int index)
{
	return p[index - 1].y;
}
int Cube::getZ(int index)
{
	return p[index - 1].z;
}