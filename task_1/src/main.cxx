#include <iostream>
#include "../lib/shape.hpp"
#include "../lib/transform.hpp"

int main(void) {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    try {

        std::vector<std::vector<int>> c(2, std::vector<int>(2));
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                c[i][j] = j;
            }
        }

        Line b(c);

        for (const auto& points : b.points) {
            for (const auto& point : points) {
                std::cout << point << " ";
            }
            std::cout << std::endl;
        }

        transform<Line> g(b);
        //b = g.shift(5, 5, 5);

        std::cout << b.getType() << std::endl;


        for (const auto& points : b.points) {
            for (const auto& point : points) {
                std::cout << point << " ";
            }
            std::cout << std::endl;
        }


    } catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }

    return EXIT_SUCCESS;
}