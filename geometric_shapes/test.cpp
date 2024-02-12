#include <iostream>
#include "rectangle.hpp"

int main() {
    double width = 5.0;
    double height = 3.0;

    rectangle my_rect(width, height);

    std::cout << my_rect.getArea() << std::endl;
    std::cout << my_rect.getPerimeter() << std::endl;

    return 0;
}