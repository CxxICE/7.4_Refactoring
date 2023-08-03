#include <iostream>
#include <cmath>

#include "shape.h"
#include "transform.h"

#include "ShapeType.h"
#include "Point.h"

void testShift(Shape *line, Shape *sqr, Shape *cube)
{
	Shape tmp;
	transform tr_line(*line);
	transform tr_sqr(*sqr);
	transform tr_cube(*cube);
	
	tmp = tr_line.shift(1, 1, 1);
	if (tmp.p1.x == 1 + line->p1.x && tmp.p1.y == 1 + line->p1.y)
	{
		std::cout << "\x1B[32mline_Shift is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mline_Shift is Failed\x1B[0m\n";
	}	
	
	tmp = tr_sqr.shift(1, 1, 1);
	if (tmp.p1.x == 1 + sqr->p1.x && tmp.p1.y == 1 + sqr->p1.y && 
		tmp.p2.x == 1 + sqr->p2.x && tmp.p2.y == 1 + sqr->p2.y &&
		tmp.p3.x == 1 + sqr->p3.x && tmp.p3.y == 1 + sqr->p3.y && 
		tmp.p4.x == 1 + sqr->p4.x && tmp.p4.y == 1 + sqr->p4.y)
	{
		std::cout << "\x1B[32msqr_Shift is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31msqr_Shift is Failed\x1B[0m\n";
	}	
	
	tmp = tr_cube.shift(1, 1, 1);
	if (tmp.p1.x == 1 + cube->p1.x && tmp.p1.y == 1 + cube->p1.y && tmp.p1.z == 1 + cube->p1.z &&
		tmp.p2.x == 1 + cube->p2.x && tmp.p2.y == 1 + cube->p2.y && tmp.p2.z == 1 + cube->p2.z &&
		tmp.p3.x == 1 + cube->p3.x && tmp.p3.y == 1 + cube->p3.y && tmp.p3.z == 1 + cube->p3.z &&
		tmp.p4.x == 1 + cube->p4.x && tmp.p4.y == 1 + cube->p4.y && tmp.p4.z == 1 + cube->p4.z &&
		tmp.p5.x == 1 + cube->p5.x && tmp.p5.y == 1 + cube->p5.y && tmp.p5.z == 1 + cube->p5.z &&
		tmp.p6.x == 1 + cube->p6.x && tmp.p6.y == 1 + cube->p6.y && tmp.p6.z == 1 + cube->p6.z &&
		tmp.p7.x == 1 + cube->p7.x && tmp.p7.y == 1 + cube->p7.y && tmp.p7.z == 1 + cube->p7.z &&
		tmp.p8.x == 1 + cube->p8.x && tmp.p8.y == 1 + cube->p8.y && tmp.p8.z == 1 + cube->p8.z)
	{
		std::cout << "\x1B[32mcube_Shift is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mcube_Shift is Failed\x1B[0m\n";
	}
	std::cout << std::endl;
}

void testScaleX(Shape *line, Shape *sqr, Shape *cube)
{
	Shape tmp;
	transform tr_line(*line);
	transform tr_sqr(*sqr);
	transform tr_cube(*cube);

	tmp = tr_line.scaleX(2);
	if (tmp.p1.x == 2 * line->p1.x && tmp.p1.y == line->p1.y)
	{
		std::cout << "\x1B[32mline_scaleX is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mline_scaleX is Failed\x1B[0m\n";
	}

	tmp = tr_sqr.scaleX(2);
	if (tmp.p1.x == 2 * sqr->p1.x && tmp.p1.y == sqr->p1.y && 
		tmp.p2.x == 2 * sqr->p2.x && tmp.p2.y == sqr->p2.y &&
		tmp.p3.x == 2 * sqr->p3.x && tmp.p3.y == sqr->p3.y && 
		tmp.p4.x == 2 * sqr->p4.x && tmp.p4.y == sqr->p4.y)
	{
		std::cout << "\x1B[32msqr_scaleX is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31msqr_scaleX is Failed\x1B[0m\n";
	}

	tmp = tr_cube.scaleX(2);
	if (tmp.p1.x == 2 * cube->p1.x && tmp.p1.y == cube->p1.y && tmp.p1.z == cube->p1.z &&
		tmp.p2.x == 2 * cube->p2.x && tmp.p2.y == cube->p2.y && tmp.p2.z == cube->p2.z &&
		tmp.p3.x == 2 * cube->p3.x && tmp.p3.y == cube->p3.y && tmp.p3.z == cube->p3.z &&
		tmp.p4.x == 2 * cube->p4.x && tmp.p4.y == cube->p4.y && tmp.p4.z == cube->p4.z &&
		tmp.p5.x == 2 * cube->p5.x && tmp.p5.y == cube->p5.y && tmp.p5.z == cube->p5.z &&
		tmp.p6.x == 2 * cube->p6.x && tmp.p6.y == cube->p6.y && tmp.p6.z == cube->p6.z &&
		tmp.p7.x == 2 * cube->p7.x && tmp.p7.y == cube->p7.y && tmp.p7.z == cube->p7.z &&
		tmp.p8.x == 2 * cube->p8.x && tmp.p8.y == cube->p8.y && tmp.p8.z == cube->p8.z)
	{
		std::cout << "\x1B[32mcube_scaleX is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mcube_scaleX is Failed\x1B[0m\n";
	}
	std::cout << std::endl;
}

void testScaleY(Shape *line, Shape *sqr, Shape *cube)
{
	Shape tmp;
	transform tr_line(*line);
	transform tr_sqr(*sqr);
	transform tr_cube(*cube);

	tmp = tr_line.scaleY(2);
	if (tmp.p1.x == line->p1.x && tmp.p1.y == 2 *line->p1.y)
	{
		std::cout << "\x1B[32mline_scaleY is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mline_scaleY is Failed\x1B[0m\n";
	}

	tmp = tr_sqr.scaleY(2);
	if (tmp.p1.x == sqr->p1.x && tmp.p1.y == 2 * sqr->p1.y && 
		tmp.p2.x == sqr->p2.x && tmp.p2.y == 2 * sqr->p2.y &&
		tmp.p3.x == sqr->p3.x && tmp.p3.y == 2 * sqr->p3.y && 
		tmp.p4.x == sqr->p4.x && tmp.p4.y == 2 * sqr->p4.y)
	{
		std::cout << "\x1B[32msqr_scaleY is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31msqr_scaleY is Failed\x1B[0m\n";
	}

	tmp = tr_cube.scaleY(2);
	if (tmp.p1.x == cube->p1.x && tmp.p1.y == 2 * cube->p1.y && tmp.p1.z == cube->p1.z &&
		tmp.p2.x == cube->p2.x && tmp.p2.y == 2 * cube->p2.y && tmp.p2.z == cube->p2.z &&
		tmp.p3.x == cube->p3.x && tmp.p3.y == 2 * cube->p3.y && tmp.p3.z == cube->p3.z &&
		tmp.p4.x == cube->p4.x && tmp.p4.y == 2 * cube->p4.y && tmp.p4.z == cube->p4.z &&
		tmp.p5.x == cube->p5.x && tmp.p5.y == 2 * cube->p5.y && tmp.p5.z == cube->p5.z &&
		tmp.p6.x == cube->p6.x && tmp.p6.y == 2 * cube->p6.y && tmp.p6.z == cube->p6.z &&
		tmp.p7.x == cube->p7.x && tmp.p7.y == 2 * cube->p7.y && tmp.p7.z == cube->p7.z &&
		tmp.p8.x == cube->p8.x && tmp.p8.y == 2 * cube->p8.y && tmp.p8.z == cube->p8.z)
	{
		std::cout << "\x1B[32mcube_scaleY is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mcube_scaleY is Failed\x1B[0m\n";
	}
	std::cout << std::endl;
}

void testScaleZ(Shape *line, Shape *sqr, Shape *cube)
{
	Shape tmp;
	transform tr_line(*line);
	transform tr_sqr(*sqr);
	transform tr_cube(*cube);

	tmp = tr_line.scaleZ(2);
	if (tmp.p1.x == line->p1.x && tmp.p1.y == line->p1.y)
	{
		std::cout << "\x1B[32mline_scaleZ is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mline_scaleZ is Failed\x1B[0m\n";
	}

	tmp = tr_sqr.scaleZ(2);
	if (tmp.p1.x == sqr->p1.x && tmp.p1.y == sqr->p1.y && 
		tmp.p2.x == sqr->p2.x && tmp.p2.y == sqr->p2.y &&
		tmp.p3.x == sqr->p3.x && tmp.p3.y == sqr->p3.y && 
		tmp.p4.x == sqr->p4.x && tmp.p4.y == sqr->p4.y)
	{
		std::cout << "\x1B[32msqr_scaleZ is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31msqr_scaleZ is Failed\x1B[0m\n";
	}

	tmp = tr_cube.scaleZ(2);
	if (tmp.p1.x == cube->p1.x && tmp.p1.y == cube->p1.y && tmp.p1.z == 2 * cube->p1.z &&
		tmp.p2.x == cube->p2.x && tmp.p2.y == cube->p2.y && tmp.p2.z == 2 * cube->p2.z &&
		tmp.p3.x == cube->p3.x && tmp.p3.y == cube->p3.y && tmp.p3.z == 2 * cube->p3.z &&
		tmp.p4.x == cube->p4.x && tmp.p4.y == cube->p4.y && tmp.p4.z == 2 * cube->p4.z &&
		tmp.p5.x == cube->p5.x && tmp.p5.y == cube->p5.y && tmp.p5.z == 2 * cube->p5.z &&
		tmp.p6.x == cube->p6.x && tmp.p6.y == cube->p6.y && tmp.p6.z == 2 * cube->p6.z &&
		tmp.p7.x == cube->p7.x && tmp.p7.y == cube->p7.y && tmp.p7.z == 2 * cube->p7.z &&
		tmp.p8.x == cube->p8.x && tmp.p8.y == cube->p8.y && tmp.p8.z == 2 * cube->p8.z)
	{
		std::cout << "\x1B[32mcube_scaleZ is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mcube_scaleZ is Failed\x1B[0m\n";
	}
	std::cout << std::endl;
}

void testScale(Shape *line, Shape *sqr, Shape *cube)
{
	Shape tmp;
	transform tr_line(*line);
	transform tr_sqr(*sqr);
	transform tr_cube(*cube);

	tmp = tr_line.scale(2);
	if (tmp.p1.x == line->p1.x / 2 && tmp.p1.y == line->p1.y / 2)
	{
		std::cout << "\x1B[32mline_scale is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mline_scale is Failed\x1B[0m\n";
	}

	tmp = tr_sqr.scale(2);
	if (tmp.p1.x == sqr->p1.x / 2 && tmp.p1.y == sqr->p1.y / 2 && 
		tmp.p2.x == sqr->p2.x / 2 && tmp.p2.y == sqr->p2.y / 2 &&
		tmp.p3.x == sqr->p3.x / 2 && tmp.p3.y == sqr->p3.y / 2 && 
		tmp.p4.x == sqr->p4.x / 2 && tmp.p4.y == sqr->p4.y / 2)
	{
		std::cout << "\x1B[32msqr_scale is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31msqr_scale is Failed\x1B[0m\n";
	}

	tmp = tr_cube.scale(2);
	if (tmp.p1.x == cube->p1.x / 2 && tmp.p1.y == cube->p1.y / 2 && tmp.p1.z == cube->p1.z / 2 &&
		tmp.p2.x == cube->p2.x / 2 && tmp.p2.y == cube->p2.y / 2 && tmp.p2.z == cube->p2.z / 2 &&
		tmp.p3.x == cube->p3.x / 2 && tmp.p3.y == cube->p3.y / 2 && tmp.p3.z == cube->p3.z / 2 &&
		tmp.p4.x == cube->p4.x / 2 && tmp.p4.y == cube->p4.y / 2 && tmp.p4.z == cube->p4.z / 2 &&
		tmp.p5.x == cube->p5.x / 2 && tmp.p5.y == cube->p5.y / 2 && tmp.p5.z == cube->p5.z / 2 &&
		tmp.p6.x == cube->p6.x / 2 && tmp.p6.y == cube->p6.y / 2 && tmp.p6.z == cube->p6.z / 2 &&
		tmp.p7.x == cube->p7.x / 2 && tmp.p7.y == cube->p7.y / 2 && tmp.p7.z == cube->p7.z / 2 &&
		tmp.p8.x == cube->p8.x / 2 && tmp.p8.y == cube->p8.y / 2 && tmp.p8.z == cube->p8.z / 2)
	{
		std::cout << "\x1B[32mcube_scale is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mcube_scale is Failed\x1B[0m\n";
	}
	std::cout << std::endl;
}

void constructorTest()
{
	{
		Point p1 = { 0, 0, 0 },
			p2 = { 2, 2, 0 },
			p3 = { 0, 0, 0 },
			p4 = { 0, 0, 0 },
			p5 = { 0, 0, 0 },
			p6 = { 0, 0, 0 },
			p7 = { 0, 0, 0 },
			p8 = { 0, 0, 0 };			
		Shape line(ShapeType::line, { p1, p2, p3, p4 ,p5, p6, p7, p8 });
		if (line.p1.x == p1.x && line.p1.y == p1.y && line.p1.z == p1.z &&
			line.p2.x == p2.x && line.p2.y == p2.y && line.p2.z == p2.z)
		{
			std::cout << "\x1B[32mline_constructor is OK\x1B[0m\n";
		}
		else
		{
			std::cout << "\x1B[31line_constructor is Failed\x1B[0m\n";
		}
		if (line.square == 0)
		{
			std::cout << "\x1B[32mline_square is OK\x1B[0m\n";
		}
		else
		{
			std::cout << "\x1B[31mline_square is Failed\x1B[0m\n";
		}
		if (line.volume == 0)
		{
			std::cout << "\x1B[32mline_volume is OK\x1B[0m\n";
		}
		else
		{
			std::cout << "\x1B[31mline_volume is Failed\x1B[0m\n";
		}
	}
	

	{
		Point p1 = { 0, 0, 0 },
			p2 = { 2, 0, 0 },
			p3 = { 2, 2, 0 },
			p4 = { 0, 2, 0 },
			p5 = { 0, 0, 0 },
			p6 = { 0, 0, 0 },
			p7 = { 0, 0, 0 },
			p8 = { 0, 0, 0 };
		
		Shape sqr(ShapeType::sqr, { p1, p2, p3, p4 ,p5, p6, p7, p8 });
		if (sqr.p1.x == p1.x && sqr.p1.y == p1.y && sqr.p1.z == p1.z &&
			sqr.p2.x == p2.x && sqr.p2.y == p2.y && sqr.p2.z == p2.z &&
			sqr.p3.x == p3.x && sqr.p3.y == p3.y && sqr.p3.z == p3.z &&
			sqr.p4.x == p4.x && sqr.p4.y == p4.y && sqr.p4.z == p4.z)
		{
			std::cout << "\x1B[32msqr_constructor is OK\x1B[0m\n";
		}
		else
		{
			std::cout << "\x1B[31msqr_constructor is Failed\x1B[0m\n";
		}
		if (sqr.square == std::abs(p1.x - p2.x) * std::abs(p1.y - p2.y))
		{
			std::cout << "\x1B[32msqr_square is OK\x1B[0m\n";
		}
		else
		{
			std::cout << "\x1B[31msqr_square is Failed\x1B[0m\n";
		}
		if (sqr.volume == 0)
		{
			std::cout << "\x1B[32msqr_volume is OK\x1B[0m\n";
		}
		else
		{
			std::cout << "\x1B[31msqr_volume is Failed\x1B[0m\n";
		}
		
	}

	{
		Point p1 = { 0, 0, 0 },
			p2 = { 2, 0, 0 },
			p3 = { 2, 2, 0 },
			p4 = { 0, 2, 0 },
			p5 = { 0, 0, 2 },
			p6 = { 2, 0, 2 },
			p7 = { 2, 2, 2 },
			p8 = { 0, 2, 2 };
		Shape cube(ShapeType::cube, {p1, p2, p3, p4 ,p5, p6, p7, p8});
		if (cube.p1.x == p1.x && cube.p1.y == p1.y && cube.p1.z == p1.z &&
			cube.p2.x == p2.x && cube.p2.y == p2.y && cube.p2.z == p2.z &&
			cube.p3.x == p3.x && cube.p3.y == p3.y && cube.p3.z == p3.z &&
			cube.p4.x == p4.x && cube.p4.y == p4.y && cube.p4.z == p4.z &&
			cube.p5.x == p5.x && cube.p5.y == p5.y && cube.p5.z == p5.z &&
			cube.p6.x == p6.x && cube.p6.y == p6.y && cube.p6.z == p6.z &&
			cube.p7.x == p7.x && cube.p7.y == p7.y && cube.p7.z == p7.z &&
			cube.p8.x == p8.x && cube.p8.y == p8.y && cube.p8.z == p8.z)
		{
			std::cout << "\x1B[32mcube_constructor is OK\x1B[0m\n";
		}
		else
		{
			std::cout << "\x1B[31cube_constructor is Failed\x1B[0m\n";
		}
		if (cube.square ==	2 * std::abs(p1.x - p2.x) * std::abs(p1.y - p2.y) + 
							2 * std::abs(p1.x - p2.x) * std::abs(p1.z - p2.z) + 
							2 * std::abs(p1.z - p2.z) * std::abs(p1.y - p2.y))
		{
			std::cout << "\x1B[32mcube_square is OK\x1B[0m\n";
		}
		else
		{
			std::cout << "\x1B[31mcube_square is Failed\x1B[0m\n";
		}
		if (cube.volume == std::abs(p1.x - p2.x) * std::abs(p1.y - p2.y) * std::abs(p1.z - p2.z))
		{
			std::cout << "\x1B[32mcube_volume is OK\x1B[0m\n";
		}
		else
		{
			std::cout << "\x1B[31mcube_volume is Failed\x1B[0m\n";
		}
	}
	std::cout << std::endl;
}


int main()
{
	setlocale(LC_ALL, "RU");
	Shape line(ShapeType::line, { { 0, 0, 0 }, { 2, 2, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } });
	Shape sqr(ShapeType::sqr,	{ { 0, 0, 0 }, { 2, 0, 0 }, { 2, 2, 0 }, { 0, 2, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } });
	Shape cube(ShapeType::cube, { { 0, 0, 0 }, { 2, 0, 0 }, { 2, 2, 0 }, { 0, 2, 0 }, { 0, 0, 2 }, { 2, 0, 2 }, { 2, 2, 2 }, { 0, 2, 2 } });

	testShift(&line, &sqr, &cube);
	testScaleX(&line, &sqr, &cube);
	testScaleY(&line, &sqr, &cube);
	testScaleZ(&line, &sqr, &cube);
	testScale(&line, &sqr, &cube);
	constructorTest();
	return 0;
}


