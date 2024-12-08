#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point &obj) : _x(obj._x) , _y(obj._y) {}

Point &Point::operator=(const Point &obj) {
	(void)obj;
	return (*this);
}

Point::~Point() {}

Fixed	Point::getX(void) const {
	return (_x);
}

Fixed	Point::getY(void) const {
	return (_y);
}