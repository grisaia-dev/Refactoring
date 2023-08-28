#include "shape.hpp"

Line::Line(std::vector<std::vector<int>> _points) {
	if ((_points.size() != 2) || (_points[0].size() != 2))
		throw std::invalid_argument("Массив не правильного размера: " + std::to_string(_points.size()) + "x" + std::to_string(_points[0].size()) + "\nДолжен быть: 2x2\n");
	else {
		points = std::move(_points);
		area = 0;
	}
}

Square::Square(std::vector<std::vector<int>> _points) {
	if ((_points.size() != 4) || (_points[0].size() != 2))
		throw std::invalid_argument("Массив не правильного размера: " + std::to_string(_points.size()) + "x" + std::to_string(_points[0].size()) + "\nДолжен быть: 4x2\n");
	else {
		points = std::move(_points);
		sidesFigure();
		area = figureArea();
	}
}

Cube::Cube(std::vector<std::vector<int>> _points) {
	if ((_points.size() != 8) || (_points[0].size() != 3))
		throw std::invalid_argument("Массив не правильного размера: " + std::to_string(_points.size()) + "x" + std::to_string(_points[0].size()) + "\nДолжен быть: 8x3\n");
	else {
		points = std::move(_points);
		sidesFigure();
		area = figureArea();
		volume = figureVolume();
	}
}

Circle::Circle(int _x1, int _y1, double R) : x1(_x1), y1(_y1), radius(R) {
	area = figureArea();
}

Cylinder::Cylinder(int _x1, int _y1, double R, double H) : x1(_x1), y1(_y1), radius(R), height(H) {
	area = figureArea();
	volume = figureVolume();
}

void Shape::printPoints() {
	std::cout << "X\t" << "Y\t" << "Z\t" << std::endl;
	for (const auto& _points : points) {
		for (const auto& point : _points) {
			std::cout << point << "\t";
		}
		std::cout << std::endl;
	}
}

void Shape::shift(int x, int y) {
	for (auto& _points : points) {
		_points[0] += x;
		_points[1] += y;
	}
}

void Shape::scaleX(int x) {
	for (auto& _points : points) {
		_points[0] *= x;
	}
}

void Shape::scaleY(int y) {
	for (auto& _points : points) {
		_points[1] *= y;
	}
}

void Shape::scaleZ(int z) {
	for (auto& _points : points) {
		_points[2] *= z;
	}
}

void Shape::scale(int s) {
	for (auto& _points : points)
		for (auto& point : _points)
			point /= s;
}