#include <iostream>
#include <cmath>

#include "shape.h"
#include "Line.h"
#include "Sqr.h"
#include "Cube.h"

#include "ShapeType.h"
#include "Point.h"

void testShift(std::shared_ptr<Shape> line, std::shared_ptr<Shape> sqr, std::shared_ptr<Shape> cube)
{
	std::unique_ptr<Shape> tmp;
		
	tmp.reset(line->shift(1, 1, 1));
	if (tmp->getX(1) == 1 + line->getX(1) && tmp->getY(1) == 1 + line->getY(1))
	{
		std::cout << "\x1B[32mline_Shift is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mline_Shift is Failed\x1B[0m\n";
	}	
	
	tmp.reset(sqr->shift(1, 1, 1));
	if (tmp->getX(1) == 1 + sqr->getX(1) && tmp->getY(1) == 1 + sqr->getY(1) && 
		tmp->getX(2) == 1 + sqr->getX(2) && tmp->getY(2) == 1 + sqr->getY(2) &&
		tmp->getX(3) == 1 + sqr->getX(3) && tmp->getY(3) == 1 + sqr->getY(3) && 
		tmp->getX(4) == 1 + sqr->getX(4) && tmp->getY(4) == 1 + sqr->getY(4))
	{
		std::cout << "\x1B[32msqr_Shift is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31msqr_Shift is Failed\x1B[0m\n";
	}	
	
	tmp.reset(cube->shift(1, 1, 1));
	if (tmp->getX(1) == 1 + cube->getX(1) && tmp->getY(1) == 1 + cube->getY(1) && tmp->getZ(1) == 1 + cube->getZ(1) &&
		tmp->getX(2) == 1 + cube->getX(2) && tmp->getY(2) == 1 + cube->getY(2) && tmp->getZ(2) == 1 + cube->getZ(2) &&
		tmp->getX(3) == 1 + cube->getX(3) && tmp->getY(3) == 1 + cube->getY(3) && tmp->getZ(3) == 1 + cube->getZ(3) &&
		tmp->getX(4) == 1 + cube->getX(4) && tmp->getY(4) == 1 + cube->getY(4) && tmp->getZ(4) == 1 + cube->getZ(4) &&
		tmp->getX(5) == 1 + cube->getX(5) && tmp->getY(5) == 1 + cube->getY(5) && tmp->getZ(5) == 1 + cube->getZ(5) &&
		tmp->getX(6) == 1 + cube->getX(6) && tmp->getY(6) == 1 + cube->getY(6) && tmp->getZ(6) == 1 + cube->getZ(6) &&
		tmp->getX(7) == 1 + cube->getX(7) && tmp->getY(7) == 1 + cube->getY(7) && tmp->getZ(7) == 1 + cube->getZ(7) &&
		tmp->getX(8) == 1 + cube->getX(8) && tmp->getY(8) == 1 + cube->getY(8) && tmp->getZ(8) == 1 + cube->getZ(8))
	{
		std::cout << "\x1B[32mcube_Shift is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mcube_Shift is Failed\x1B[0m\n";
	}
	std::cout << std::endl;
}

void testScaleX(std::shared_ptr<Shape> line, std::shared_ptr<Shape> sqr, std::shared_ptr<Shape> cube)
{
	std::unique_ptr<Shape> tmp;

	tmp.reset(line->scaleX(2));
	if (tmp->getX(1) == 2 * line->getX(1) && tmp->getY(1) == line->getY(1))
	{
		std::cout << "\x1B[32mline_scaleX is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mline_scaleX is Failed\x1B[0m\n";
	}

	tmp.reset(sqr->scaleX(2));
	if (tmp->getX(1) == 2 * sqr->getX(1) && tmp->getY(1) == sqr->getY(1) && 
		tmp->getX(2) == 2 * sqr->getX(2) && tmp->getY(2) == sqr->getY(2) &&
		tmp->getX(3) == 2 * sqr->getX(3) && tmp->getY(3) == sqr->getY(3) && 
		tmp->getX(4) == 2 * sqr->getX(4) && tmp->getY(4) == sqr->getY(4))
	{
		std::cout << "\x1B[32msqr_scaleX is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31msqr_scaleX is Failed\x1B[0m\n";
	}

	tmp.reset(cube->scaleX(2));
	if (tmp->getX(1) == 2 * cube->getX(1) && tmp->getY(1) == cube->getY(1) && tmp->getZ(1) == cube->getZ(1) &&
		tmp->getX(2) == 2 * cube->getX(2) && tmp->getY(2) == cube->getY(2) && tmp->getZ(2) == cube->getZ(2) &&
		tmp->getX(3) == 2 * cube->getX(3) && tmp->getY(3) == cube->getY(3) && tmp->getZ(3) == cube->getZ(3) &&
		tmp->getX(4) == 2 * cube->getX(4) && tmp->getY(4) == cube->getY(4) && tmp->getZ(4) == cube->getZ(4) &&
		tmp->getX(5) == 2 * cube->getX(5) && tmp->getY(5) == cube->getY(5) && tmp->getZ(5) == cube->getZ(5) &&
		tmp->getX(6) == 2 * cube->getX(6) && tmp->getY(6) == cube->getY(6) && tmp->getZ(6) == cube->getZ(6) &&
		tmp->getX(7) == 2 * cube->getX(7) && tmp->getY(7) == cube->getY(7) && tmp->getZ(7) == cube->getZ(7) &&
		tmp->getX(8) == 2 * cube->getX(8) && tmp->getY(8) == cube->getY(8) && tmp->getZ(8) == cube->getZ(8))
	{
		std::cout << "\x1B[32mcube_scaleX is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mcube_scaleX is Failed\x1B[0m\n";
	}
	std::cout << std::endl;
}

void testScaleY(std::shared_ptr<Shape> line, std::shared_ptr<Shape> sqr, std::shared_ptr<Shape> cube)
{
	std::unique_ptr<Shape> tmp;

	tmp.reset(line->scaleY(2));
	if (tmp->getX(1) == line->getX(1) && tmp->getY(1) == 2 * line->getY(1))
	{
		std::cout << "\x1B[32mline_scaleY is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mline_scaleY is Failed\x1B[0m\n";
	}

	tmp.reset(sqr->scaleY(2));
	if (tmp->getX(1) == sqr->getX(1) && tmp->getY(1) == 2 * sqr->getY(1) &&
		tmp->getX(2) == sqr->getX(2) && tmp->getY(2) == 2 * sqr->getY(2) &&
		tmp->getX(3) == sqr->getX(3) && tmp->getY(3) == 2 * sqr->getY(3) &&
		tmp->getX(4) == sqr->getX(4) && tmp->getY(4) == 2 * sqr->getY(4))
	{
		std::cout << "\x1B[32msqr_scaleY is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31msqr_scaleY is Failed\x1B[0m\n";
	}

	tmp.reset(cube->scaleY(2));
	if (tmp->getX(1) == cube->getX(1) && tmp->getY(1) == 2 * cube->getY(1) && tmp->getZ(1) == cube->getZ(1) &&
		tmp->getX(2) == cube->getX(2) && tmp->getY(2) == 2 * cube->getY(2) && tmp->getZ(2) == cube->getZ(2) &&
		tmp->getX(3) == cube->getX(3) && tmp->getY(3) == 2 * cube->getY(3) && tmp->getZ(3) == cube->getZ(3) &&
		tmp->getX(4) == cube->getX(4) && tmp->getY(4) == 2 * cube->getY(4) && tmp->getZ(4) == cube->getZ(4) &&
		tmp->getX(5) == cube->getX(5) && tmp->getY(5) == 2 * cube->getY(5) && tmp->getZ(5) == cube->getZ(5) &&
		tmp->getX(6) == cube->getX(6) && tmp->getY(6) == 2 * cube->getY(6) && tmp->getZ(6) == cube->getZ(6) &&
		tmp->getX(7) == cube->getX(7) && tmp->getY(7) == 2 * cube->getY(7) && tmp->getZ(7) == cube->getZ(7) &&
		tmp->getX(8) == cube->getX(8) && tmp->getY(8) == 2 * cube->getY(8) && tmp->getZ(8) == cube->getZ(8))
	{
		std::cout << "\x1B[32mcube_scaleY is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mcube_scaleY is Failed\x1B[0m\n";
	}
	std::cout << std::endl;
}

void testScaleZ(std::shared_ptr<Shape> line, std::shared_ptr<Shape> sqr, std::shared_ptr<Shape> cube)
{
	std::unique_ptr<Shape> tmp;

	tmp.reset(line->scaleZ(2));
	if (tmp->getX(1) == line->getX(1) && tmp->getY(1) == line->getY(1))
	{
		std::cout << "\x1B[32mline_scaleZ is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mline_scaleZ is Failed\x1B[0m\n";
	}

	tmp.reset(sqr->scaleZ(2));
	if (tmp->getX(1) == sqr->getX(1) && tmp->getY(1) == sqr->getY(1) &&
		tmp->getX(2) == sqr->getX(2) && tmp->getY(2) == sqr->getY(2) &&
		tmp->getX(3) == sqr->getX(3) && tmp->getY(3) == sqr->getY(3) &&
		tmp->getX(4) == sqr->getX(4) && tmp->getY(4) == sqr->getY(4))
	{
		std::cout << "\x1B[32msqr_scaleZ is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31msqr_scaleZ is Failed\x1B[0m\n";
	}

	tmp.reset(cube->scaleZ(2));
	if (tmp->getX(1) == cube->getX(1) && tmp->getY(1) == cube->getY(1) && tmp->getZ(1) == 2 * cube->getZ(1) &&
		tmp->getX(2) == cube->getX(2) && tmp->getY(2) == cube->getY(2) && tmp->getZ(2) == 2 * cube->getZ(2) &&
		tmp->getX(3) == cube->getX(3) && tmp->getY(3) == cube->getY(3) && tmp->getZ(3) == 2 * cube->getZ(3) &&
		tmp->getX(4) == cube->getX(4) && tmp->getY(4) == cube->getY(4) && tmp->getZ(4) == 2 * cube->getZ(4) &&
		tmp->getX(5) == cube->getX(5) && tmp->getY(5) == cube->getY(5) && tmp->getZ(5) == 2 * cube->getZ(5) &&
		tmp->getX(6) == cube->getX(6) && tmp->getY(6) == cube->getY(6) && tmp->getZ(6) == 2 * cube->getZ(6) &&
		tmp->getX(7) == cube->getX(7) && tmp->getY(7) == cube->getY(7) && tmp->getZ(7) == 2 * cube->getZ(7) &&
		tmp->getX(8) == cube->getX(8) && tmp->getY(8) == cube->getY(8) && tmp->getZ(8) == 2 * cube->getZ(8))
	{
		std::cout << "\x1B[32mcube_scaleZ is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mcube_scaleZ is Failed\x1B[0m\n";
	}
	std::cout << std::endl;
}

void testScale(std::shared_ptr<Shape> line, std::shared_ptr<Shape> sqr, std::shared_ptr<Shape> cube)
{
	std::unique_ptr<Shape> tmp;

	tmp.reset(line->scale(2));
	if (tmp->getX(1) == line->getX(1) / 2 && tmp->getY(1) == line->getY(1) / 2)
	{
		std::cout << "\x1B[32mline_scale is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31mline_scale is Failed\x1B[0m\n";
	}

	tmp.reset(sqr->scale(2));
	if (tmp->getX(1) == sqr->getX(1) / 2 && tmp->getY(1) == sqr->getY(1) / 2 &&
		tmp->getX(2) == sqr->getX(2) / 2 && tmp->getY(2) == sqr->getY(2) / 2 &&
		tmp->getX(3) == sqr->getX(3) / 2 && tmp->getY(3) == sqr->getY(3) / 2 &&
		tmp->getX(4) == sqr->getX(4) / 2 && tmp->getY(4) == sqr->getY(4) / 2)
	{
		std::cout << "\x1B[32msqr_scale is OK\x1B[0m\n";
	}
	else
	{
		std::cout << "\x1B[31msqr_scale is Failed\x1B[0m\n";
	}

	tmp.reset(cube->scale(2));
	if (tmp->getX(1) == cube->getX(1) / 2 && tmp->getY(1) == cube->getY(1) / 2 && tmp->getZ(1) == cube->getZ(1) / 2 &&
		tmp->getX(2) == cube->getX(2) / 2 && tmp->getY(2) == cube->getY(2) / 2 && tmp->getZ(2) == cube->getZ(2) / 2 &&
		tmp->getX(3) == cube->getX(3) / 2 && tmp->getY(3) == cube->getY(3) / 2 && tmp->getZ(3) == cube->getZ(3) / 2 &&
		tmp->getX(4) == cube->getX(4) / 2 && tmp->getY(4) == cube->getY(4) / 2 && tmp->getZ(4) == cube->getZ(4) / 2 &&
		tmp->getX(5) == cube->getX(5) / 2 && tmp->getY(5) == cube->getY(5) / 2 && tmp->getZ(5) == cube->getZ(5) / 2 &&
		tmp->getX(6) == cube->getX(6) / 2 && tmp->getY(6) == cube->getY(6) / 2 && tmp->getZ(6) == cube->getZ(6) / 2 &&
		tmp->getX(7) == cube->getX(7) / 2 && tmp->getY(7) == cube->getY(7) / 2 && tmp->getZ(7) == cube->getZ(7) / 2 &&
		tmp->getX(8) == cube->getX(8) / 2 && tmp->getY(8) == cube->getY(8) / 2 && tmp->getZ(8) == cube->getZ(8) / 2)
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
		std::unique_ptr<Shape> line(Shape::create(ShapeType::line, { p1, p2, p3, p4 ,p5, p6, p7, p8 }));
		if (line->getX(1) == p1.x && line->getY(1) == p1.y && line->getZ(1) == p1.z &&
			line->getX(2) == p2.x && line->getY(2) == p2.y && line->getZ(2) == p2.z)
		{
			std::cout << "\x1B[32mline_constructor is OK\x1B[0m\n";
		}
		else
		{
			std::cout << "\x1B[31line_constructor is Failed\x1B[0m\n";
		}
		if (line->getSquare() == 0)
		{
			std::cout << "\x1B[32mline_square is OK\x1B[0m\n";
		}
		else
		{
			std::cout << "\x1B[31mline_square is Failed\x1B[0m\n";
		}
		if (line->getVolume() == 0)
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
		
		std::unique_ptr<Shape> sqr(Shape::create(ShapeType::sqr, { p1, p2, p3, p4 ,p5, p6, p7, p8 }));
		if (sqr->getX(1) == p1.x && sqr->getY(1) == p1.y && sqr->getZ(1) == p1.z &&
			sqr->getX(2) == p2.x && sqr->getY(2) == p2.y && sqr->getZ(2) == p2.z &&
			sqr->getX(3) == p3.x && sqr->getY(3) == p3.y && sqr->getZ(3) == p3.z &&
			sqr->getX(4) == p4.x && sqr->getY(4) == p4.y && sqr->getZ(4) == p4.z)
		{
			std::cout << "\x1B[32msqr_constructor is OK\x1B[0m\n";
		}
		else
		{
			std::cout << "\x1B[31msqr_constructor is Failed\x1B[0m\n";
		}
		if (sqr->getSquare() == std::abs(p1.x - p2.x) * std::abs(p1.y - p2.y))
		{
			std::cout << "\x1B[32msqr_square is OK\x1B[0m\n";
		}
		else
		{
			std::cout << "\x1B[31msqr_square is Failed\x1B[0m\n";
		}
		if (sqr->getVolume() == 0)
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
		std::unique_ptr<Shape> cube(Shape::create(ShapeType::cube, {p1, p2, p3, p4 ,p5, p6, p7, p8}));
		if (cube->getX(1) == p1.x && cube->getY(1) == p1.y && cube->getZ(1) == p1.z &&
			cube->getX(2) == p2.x && cube->getY(2) == p2.y && cube->getZ(2) == p2.z &&
			cube->getX(3) == p3.x && cube->getY(3) == p3.y && cube->getZ(3) == p3.z &&
			cube->getX(4) == p4.x && cube->getY(4) == p4.y && cube->getZ(4) == p4.z &&
			cube->getX(5) == p5.x && cube->getY(5) == p5.y && cube->getZ(5) == p5.z &&
			cube->getX(6) == p6.x && cube->getY(6) == p6.y && cube->getZ(6) == p6.z &&
			cube->getX(7) == p7.x && cube->getY(7) == p7.y && cube->getZ(7) == p7.z &&
			cube->getX(8) == p8.x && cube->getY(8) == p8.y && cube->getZ(8) == p8.z)
		{
			std::cout << "\x1B[32mcube_constructor is OK\x1B[0m\n";
		}
		else
		{
			std::cout << "\x1B[31cube_constructor is Failed\x1B[0m\n";
		}
		if (cube->getSquare() == 2 * std::abs(p1.x - p2.x) * std::abs(p1.y - p2.y) +
							2 * std::abs(p1.x - p2.x) * std::abs(p1.z - p2.z) + 
							2 * std::abs(p1.z - p2.z) * std::abs(p1.y - p2.y))
		{
			std::cout << "\x1B[32mcube_square is OK\x1B[0m\n";
		}
		else
		{
			std::cout << "\x1B[31mcube_square is Failed\x1B[0m\n";
		}
		if (cube->getVolume() == std::abs(p1.x - p2.x) * std::abs(p1.y - p2.y) * std::abs(p1.z - p2.z))
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
	
	std::shared_ptr<Shape> line (Shape::create(ShapeType::line, {
		{ 0, 0, 0 },
		{ 2, 2, 0 }
		}));
	std::shared_ptr<Shape> sqr(Shape::create(ShapeType::sqr, {
		{ 0, 0, 0 }, 
		{ 2, 0, 0 }, 
		{ 2, 2, 0 }, 
		{ 0, 2, 0 } 
		}));
	std::shared_ptr<Shape> cube(Shape::create(ShapeType::cube, {
		{ 0, 0, 0 }, 
		{ 2, 0, 0 }, 
		{ 2, 2, 0 }, 
		{ 0, 2, 0 }, 
		{ 0, 0, 2 }, 
		{ 2, 0, 2 }, 
		{ 2, 2, 2 }, 
		{ 0, 2, 2 } 
		}));
	testShift(line, sqr, cube);
	testScaleX(line, sqr, cube);
	testScaleY(line, sqr, cube);
	testScaleZ(line, sqr, cube);
	testScale(line, sqr, cube);
	constructorTest();
	return 0;
}


