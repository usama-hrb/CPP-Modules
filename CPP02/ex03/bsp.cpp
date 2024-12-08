#include "Point.hpp"

// Area= 2/1 ​∣ x1​(y2​−y3​) + x2​(y3​−y1​) + x3​(y1​−y2​)∣

Fixed	triangleArea(Point const &x1, Point const &x2, Point const &x3) {
	return Fixed (0.5f * abs(
		(x1.getX().toFloat() * (x2.getY().toFloat() - x3.getY().toFloat())) +
		(x2.getX().toFloat() * (x3.getY().toFloat() - x1.getY().toFloat())) +
		(x3.getX().toFloat() * (x1.getY().toFloat() - x2.getY().toFloat())) 

	));
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed area = triangleArea(a, b, c);
	Fixed area1 = triangleArea(point, b, c);
	Fixed area2 = triangleArea(a, point, c);
	Fixed area3 = triangleArea(point, a, b);

	return (((area1 + area2) + area3.toFloat() == area.toFloat()) && area1 > 0 && area2 > 0 && area3 > 0);
}