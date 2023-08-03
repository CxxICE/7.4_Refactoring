#include <iostream>
#include <cmath>

#include "shape.h"
#include "transform.h"

void testShift(Shape *line, Shape *sqr, Shape *cube)
{
	Shape tmp;
	transform tr_line(*line);
	transform tr_sqr(*sqr);
	transform tr_cube(*cube);
	
	tmp = tr_line.shift(1, 1, 1);
	if (tmp.x1 == 1 + line->x1 && tmp.y1 == 1 + line->y1)
	{
		std::cout << "\x1B[32mline_Shift is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mline_Shift is Failed\x1B[0m\n";
	}	
	
	tmp = tr_sqr.shift(1, 1, 1);
	if (tmp.x1 == 1 + sqr->x1 && tmp.y1 == 1 + sqr->y1 && tmp.x2 == 1 + sqr->x2 && tmp.y2 == 1 + sqr->y2 &&
		tmp.x3 == 1 + sqr->x3 && tmp.y3 == 1 + sqr->y3 && tmp.x4 == 1 + sqr->x4 && tmp.y4 == 1 + sqr->y4)
	{
		std::cout << "\x1B[32msqr_Shift is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31msqr_Shift is Failed\x1B[0m\n";
	}	
	
	tmp = tr_cube.shift(1, 1, 1);
	if (tmp.x1 == 1 + cube->x1 && tmp.y1 == 1 + cube->y1 && tmp.z1 == 1 + cube->z1 &&
		tmp.x2 == 1 + cube->x2 && tmp.y2 == 1 + cube->y2 && tmp.z2 == 1 + cube->z2 &&
		tmp.x3 == 1 + cube->x3 && tmp.y3 == 1 + cube->y3 && tmp.z3 == 1 + cube->z3 &&
		tmp.x4 == 1 + cube->x4 && tmp.y4 == 1 + cube->y4 && tmp.z4 == 1 + cube->z4 &&
		tmp.x5 == 1 + cube->x5 && tmp.y5 == 1 + cube->y5 && tmp.z5 == 1 + cube->z5 &&
		tmp.x6 == 1 + cube->x6 && tmp.y6 == 1 + cube->y6 && tmp.z6 == 1 + cube->z6 &&
		tmp.x7 == 1 + cube->x7 && tmp.y7 == 1 + cube->y7 && tmp.z7 == 1 + cube->z7 &&
		tmp.x8 == 1 + cube->x8 && tmp.y8 == 1 + cube->y8 && tmp.z8 == 1 + cube->z8)
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
	if (tmp.x1 == 2 * line->x1 && tmp.y1 == line->y1)
	{
		std::cout << "\x1B[32mline_scaleX is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mline_scaleX is Failed\x1B[0m\n";
	}

	tmp = tr_sqr.scaleX(2);
	if (tmp.x1 == 2 * sqr->x1 && tmp.y1 == sqr->y1 && tmp.x2 == 2 * sqr->x2 && tmp.y2 == sqr->y2 &&
		tmp.x3 == 2 * sqr->x3 && tmp.y3 == sqr->y3 && tmp.x4 == 2 * sqr->x4 && tmp.y4 == sqr->y4)
	{
		std::cout << "\x1B[32msqr_scaleX is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31msqr_scaleX is Failed\x1B[0m\n";
	}

	tmp = tr_cube.scaleX(2);
	if (tmp.x1 == 2 * cube->x1 && tmp.y1 == cube->y1 && tmp.z1 == cube->z1 &&
		tmp.x2 == 2 * cube->x2 && tmp.y2 == cube->y2 && tmp.z2 == cube->z2 &&
		tmp.x3 == 2 * cube->x3 && tmp.y3 == cube->y3 && tmp.z3 == cube->z3 &&
		tmp.x4 == 2 * cube->x4 && tmp.y4 == cube->y4 && tmp.z4 == cube->z4 &&
		tmp.x5 == 2 * cube->x5 && tmp.y5 == cube->y5 && tmp.z5 == cube->z5 &&
		tmp.x6 == 2 * cube->x6 && tmp.y6 == cube->y6 && tmp.z6 == cube->z6 &&
		tmp.x7 == 2 * cube->x7 && tmp.y7 == cube->y7 && tmp.z7 == cube->z7 &&
		tmp.x8 == 2 * cube->x8 && tmp.y8 == cube->y8 && tmp.z8 == cube->z8)
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
	if (tmp.x1 == line->x1 && tmp.y1 == 2 *line->y1)
	{
		std::cout << "\x1B[32mline_scaleY is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mline_scaleY is Failed\x1B[0m\n";
	}

	tmp = tr_sqr.scaleY(2);
	if (tmp.x1 == sqr->x1 && tmp.y1 == 2 * sqr->y1 && tmp.x2 == sqr->x2 && tmp.y2 == 2 * sqr->y2 &&
		tmp.x3 == sqr->x3 && tmp.y3 == 2 * sqr->y3 && tmp.x4 == sqr->x4 && tmp.y4 == 2 * sqr->y4)
	{
		std::cout << "\x1B[32msqr_scaleY is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31msqr_scaleY is Failed\x1B[0m\n";
	}

	tmp = tr_cube.scaleY(2);
	if (tmp.x1 == cube->x1 && tmp.y1 == 2 * cube->y1 && tmp.z1 == cube->z1 &&
		tmp.x2 == cube->x2 && tmp.y2 == 2 * cube->y2 && tmp.z2 == cube->z2 &&
		tmp.x3 == cube->x3 && tmp.y3 == 2 * cube->y3 && tmp.z3 == cube->z3 &&
		tmp.x4 == cube->x4 && tmp.y4 == 2 * cube->y4 && tmp.z4 == cube->z4 &&
		tmp.x5 == cube->x5 && tmp.y5 == 2 * cube->y5 && tmp.z5 == cube->z5 &&
		tmp.x6 == cube->x6 && tmp.y6 == 2 * cube->y6 && tmp.z6 == cube->z6 &&
		tmp.x7 == cube->x7 && tmp.y7 == 2 * cube->y7 && tmp.z7 == cube->z7 &&
		tmp.x8 == cube->x8 && tmp.y8 == 2 * cube->y8 && tmp.z8 == cube->z8)
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
	if (tmp.x1 == line->x1 && tmp.y1 == line->y1)
	{
		std::cout << "\x1B[32mline_scaleZ is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mline_scaleZ is Failed\x1B[0m\n";
	}

	tmp = tr_sqr.scaleZ(2);
	if (tmp.x1 == sqr->x1 && tmp.y1 == sqr->y1 && tmp.x2 == sqr->x2 && tmp.y2 == sqr->y2 &&
		tmp.x3 == sqr->x3 && tmp.y3 == sqr->y3 && tmp.x4 == sqr->x4 && tmp.y4 == sqr->y4)
	{
		std::cout << "\x1B[32msqr_scaleZ is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31msqr_scaleZ is Failed\x1B[0m\n";
	}

	tmp = tr_cube.scaleZ(2);
	if (tmp.x1 == cube->x1 && tmp.y1 == cube->y1 && tmp.z1 == 2 * cube->z1 &&
		tmp.x2 == cube->x2 && tmp.y2 == cube->y2 && tmp.z2 == 2 * cube->z2 &&
		tmp.x3 == cube->x3 && tmp.y3 == cube->y3 && tmp.z3 == 2 * cube->z3 &&
		tmp.x4 == cube->x4 && tmp.y4 == cube->y4 && tmp.z4 == 2 * cube->z4 &&
		tmp.x5 == cube->x5 && tmp.y5 == cube->y5 && tmp.z5 == 2 * cube->z5 &&
		tmp.x6 == cube->x6 && tmp.y6 == cube->y6 && tmp.z6 == 2 * cube->z6 &&
		tmp.x7 == cube->x7 && tmp.y7 == cube->y7 && tmp.z7 == 2 * cube->z7 &&
		tmp.x8 == cube->x8 && tmp.y8 == cube->y8 && tmp.z8 == 2 * cube->z8)
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
	if (tmp.x1 == line->x1 / 2 && tmp.y1 == line->y1 / 2)
	{
		std::cout << "\x1B[32mline_scale is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mline_scale is Failed\x1B[0m\n";
	}

	tmp = tr_sqr.scale(2);
	if (tmp.x1 == sqr->x1 / 2 && tmp.y1 == sqr->y1 / 2 && tmp.x2 == sqr->x2 / 2 && tmp.y2 == sqr->y2 / 2 &&
		tmp.x3 == sqr->x3 / 2 && tmp.y3 == sqr->y3 / 2 && tmp.x4 == sqr->x4 / 2 && tmp.y4 == sqr->y4 / 2)
	{
		std::cout << "\x1B[32msqr_scale is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31msqr_scale is Failed\x1B[0m\n";
	}

	tmp = tr_cube.scale(2);
	if (tmp.x1 == cube->x1 / 2 && tmp.y1 == cube->y1 / 2 && tmp.z1 == cube->z1 / 2 &&
		tmp.x2 == cube->x2 / 2 && tmp.y2 == cube->y2 / 2 && tmp.z2 == cube->z2 / 2 &&
		tmp.x3 == cube->x3 / 2 && tmp.y3 == cube->y3 / 2 && tmp.z3 == cube->z3 / 2 &&
		tmp.x4 == cube->x4 / 2 && tmp.y4 == cube->y4 / 2 && tmp.z4 == cube->z4 / 2 &&
		tmp.x5 == cube->x5 / 2 && tmp.y5 == cube->y5 / 2 && tmp.z5 == cube->z5 / 2 &&
		tmp.x6 == cube->x6 / 2 && tmp.y6 == cube->y6 / 2 && tmp.z6 == cube->z6 / 2 &&
		tmp.x7 == cube->x7 / 2 && tmp.y7 == cube->y7 / 2 && tmp.z7 == cube->z7 / 2 &&
		tmp.x8 == cube->x8 / 2 && tmp.y8 == cube->y8 / 2 && tmp.z8 == cube->z8 / 2)
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
		int x1 = 0, y1 = 0, z1 = 0,
			x2 = 2, y2 = 2, z2 = 0,
			x3 = 0, y3 = 0, z3 = 0,
			x4 = 0, y4 = 0, z4 = 0,
			x5 = 0, y5 = 0, z5 = 0,
			x6 = 0, y6 = 0, z6 = 0,
			x7 = 0, y7 = 0, z7 = 0,
			x8 = 0, y8 = 0, z8 = 0;
		Shape line(0, x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4, x5, y5, z5, x6, y6, z6, x7, y7, z7, x8, y8, z8);
		if (line.x1 == x1 && line.y1 == y1 && line.z1 == z1 &&
			line.x2 == x2 && line.y2 == y2 && line.z2 == z2)
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
		int x1 = 0, y1 = 0, z1 = 0,
			x2 = 2, y2 = 0, z2 = 0,
			x3 = 2, y3 = 2, z3 = 0,
			x4 = 0, y4 = 2, z4 = 0,
			x5 = 0, y5 = 0, z5 = 0,
			x6 = 0, y6 = 0, z6 = 0,
			x7 = 0, y7 = 0, z7 = 0,
			x8 = 0, y8 = 0, z8 = 0;
		Shape sqr(1, x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4, x5, y5, z5, x6, y6, z6, x7, y7, z7, x8, y8, z8);
		if (sqr.x1 == x1 && sqr.y1 == y1 && sqr.z1 == z1 &&
			sqr.x2 == x2 && sqr.y2 == y2 && sqr.z2 == z2 &&
			sqr.x3 == x3 && sqr.y3 == y3 && sqr.z3 == z3 &&
			sqr.x4 == x4 && sqr.y4 == y4 && sqr.z4 == z4)
		{
			std::cout << "\x1B[32msqr_constructor is OK\x1B[0m\n";
		}
		else
		{
			std::cout << "\x1B[31msqr_constructor is Failed\x1B[0m\n";
		}
		if (sqr.square == std::abs(x1 - x2) * std::abs(y1 - y2))
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
		int x1 = 0, y1 = 0, z1 = 0,
			x2 = 2, y2 = 0, z2 = 0,
			x3 = 2, y3 = 2, z3 = 0,
			x4 = 0, y4 = 2, z4 = 0,
			x5 = 0, y5 = 0, z5 = 2,
			x6 = 2, y6 = 0, z6 = 2,
			x7 = 2, y7 = 2, z7 = 2,
			x8 = 0, y8 = 2, z8 = 2;
		Shape cube(2, x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4, x5, y5, z5, x6, y6, z6, x7, y7, z7, x8, y8, z8);
		if (cube.x1 == x1 && cube.y1 == y1 && cube.z1 == z1 &&
			cube.x2 == x2 && cube.y2 == y2 && cube.z2 == z2 &&
			cube.x3 == x3 && cube.y3 == y3 && cube.z3 == z3 &&
			cube.x4 == x4 && cube.y4 == y4 && cube.z4 == z4 &&
			cube.x5 == x5 && cube.y5 == y5 && cube.z5 == z5 &&
			cube.x6 == x6 && cube.y6 == y6 && cube.z6 == z6 &&
			cube.x7 == x7 && cube.y7 == y7 && cube.z7 == z7 &&
			cube.x8 == x8 && cube.y8 == y8 && cube.z8 == z8)
		{
			std::cout << "\x1B[32mcube_constructor is OK\x1B[0m\n";
		}
		else
		{
			std::cout << "\x1B[31cube_constructor is Failed\x1B[0m\n";
		}
		if (cube.square ==	2 * std::abs(x1 - x2) * std::abs(y1 - y2) + 
							2 * std::abs(x1 - x2) * std::abs(z1 - z2) + 
							2 * std::abs(z1 - z2) * std::abs(y1 - y2))
		{
			std::cout << "\x1B[32mcube_square is OK\x1B[0m\n";
		}
		else
		{
			std::cout << "\x1B[31mcube_square is Failed\x1B[0m\n";
		}
		if (cube.volume == std::abs(x1 - x2) * std::abs(y1 - y2) * std::abs(z1 - z2))
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
	Shape line(0, 0, 0, 0, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Shape sqr(1, 0, 0, 0, 2, 0, 0, 2, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Shape cube(2, 0, 0, 0, 2, 0, 0, 2, 2, 0, 0, 2, 0, 0, 0, 2, 2, 0, 2, 2, 2, 2, 0, 2, 2);

	testShift(&line, &sqr, &cube);
	testScaleX(&line, &sqr, &cube);
	testScaleY(&line, &sqr, &cube);
	testScaleZ(&line, &sqr, &cube);
	testScale(&line, &sqr, &cube);
	constructorTest();
	return 0;
}


