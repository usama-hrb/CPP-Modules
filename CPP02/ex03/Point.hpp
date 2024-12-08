#pragma once

#include "Fixed.hpp"

class Point {
	private:
		const Fixed _x;
		const Fixed _y;

	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &obj);
		Point &operator= (const Point &obj);
		~Point();

		Fixed	getX(void) const;
		Fixed	getY(void) const;
};

Fixed	triangleArea(Point const &x1, Point const &x2, Point const &x3);
bool bsp( Point const a, Point const b, Point const c, Point const point);