#include <iostream>
#include "Point.hpp"


int main() {
    Point a(0, 0);
    Point b(10, 0);
    Point c(5, 5);
    Point pointInside(5, 2);
    Point pointOutside(10, 10);

    std::cout << "Point inside triangle: " << bsp(a, b, c, pointInside) << std::endl; // Expected: 1
    std::cout << "Point outside triangle: " << bsp(a, b, c, pointOutside) << std::endl; // Expected: 0

    return 0;
}