#include "shape.hpp"

Line::Line(std::vector<std::vector<int>> _points) {
	if ((_points.size() != 2) || (_points[0].size() != 2))
		throw std::invalid_argument("Массив не правильного размера: " + std::to_string(_points.size()) + "x" + std::to_string(_points[0].size()) + "\nДолжен быть: 2x2\n");
	else {
		type = TYPE::line;
		points = std::move(_points);
		area = 0;
		volume = 0;
	}
}

Square::Square(std::vector<std::vector<int>> _points) {
	if ((_points.size() != 4) || (_points[0].size() != 2))
		throw std::invalid_argument("Массив не правильного размера: " + std::to_string(_points.size()) + "x" + std::to_string(_points[0].size()) + "\nДолжен быть: 4x2\n");
	else {
		type = TYPE::sqr;
		points = std::move(_points);
		sidesFigure();
		area = figureArea();
		volume = 0;
	}
}

Cube::Cube(std::vector<std::vector<int>> _points) {
	if ((_points.size() != 8) || (_points[0].size() != 3))
		throw std::invalid_argument("Массив не правильного размера: " + std::to_string(_points.size()) + "x" + std::to_string(_points[0].size()) + "\nДолжен быть: 8x3\n");
	else {
		type = TYPE::cube;
		points = std::move(_points);
		sidesFigure();
		area = figureArea();
		volume = figureVolume();
	}
}

Circle::Circle(int _x1, int _y1, double R, double H) : x1(_x1), y1(_y1), radius(R) {
	type = TYPE::circle;
	area = figureArea();
	volume = 0;
}

Cylinder::Cylinder(int _x1, int _y1, double R, double H) : x1(_x1), y1(_y1), radius(R), height(H) {
	type = TYPE::cylinder;
	area = figureArea();
	volume = figureVolume();
}
