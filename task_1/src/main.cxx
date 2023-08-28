#include <iostream>
#include "../lib/shape.hpp"

std::vector<std::vector<int>> createVector(int row, int cols) {
    std::vector<std::vector<int>> points(row, std::vector<int>(cols));
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < cols; ++j) {
            points[i][j] = j + 4 * 2;
        }
    }
    return points;
}

int main(void) {
    setlocale(LC_ALL, "ru");

    try {

        std::cout << "Линия: " << std::endl;
        Line _line(createVector(2, 2));
        _line.printPoints(); std::cout << std::endl;
        _line.shift(3, 1);
        _line.printPoints(); std::cout << std::endl;


        std::cout << "Квадрат: " << std::endl;
        Square _square(createVector(4, 2));
        _square.printPoints(); std::cout << std::endl;
        _square.shift(3, 1);
        _square.printPoints(); std::cout << std::endl;

        std::cout << "Куб: " << std::endl;
        Cube cube(createVector(8, 3));
        cube.printPoints(); std::cout << std::endl;
        cube.shift(3, 1, 2);
        cube.printPoints(); std::cout << std::endl;

    } catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }

    return EXIT_SUCCESS;
}