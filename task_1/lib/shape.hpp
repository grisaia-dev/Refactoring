#pragma once
#include <cmath>
#include <string>
#include <vector>
#include <stdexcept>

#define PI 3.14159265358979323846

class Shape {
public:
	explicit Shape() = default;
	std::vector<std::vector<int>> points;
protected:
	virtual void sidesFigure() {};
	virtual double figureArea() { return NULL; };

	double area = 0;
};

class Line : public Shape {
public:
	explicit Line() = default;
	Line(std::vector<std::vector<int>> _points);
};

class Square : public Shape {
public:
	explicit Square() = default;
	Square(std::vector<std::vector<int>> _points);
private:
	virtual void sidesFigure() override { a = abs(points[0][0] - points[1][0]); b = abs(points[0][1] - points[1][1]); }
	virtual double figureArea() override { return a * b; }

	int a = 0;
	int b = 0;
};

class Cube : public Shape {
public:
	explicit Cube() = default;
	Cube(std::vector<std::vector<int>> _points);
private:
	virtual void sidesFigure() override { a = abs(points[0][0] - points[1][0]); b = abs(points[0][1] - points[1][1]); c = abs(points[0][2] - points[1][2]); }
	virtual double figureArea() override { return 2 * a * b + 2 * a * c + 2 * b * c; }
	double figureVolume() { return a * b * c; }

	int a = 0;
	int b = 0;
	int c = 0;

	double volume = 0;
};

class Circle : public Shape {
public:
	explicit Circle() = default;
	Circle(int _x1, int _y1, double R);
private:
	virtual double figureArea() override { return PI * radius * radius; }

	int x1, y1;
	double radius;
};

class Cylinder : public Shape {
public:
	explicit Cylinder() = default;
	Cylinder(int _x1, int _y1, double R, double H);
private:
	virtual double figureArea() override { return PI * radius * radius + 2 * radius * height; }
	double figureVolume() { return PI * radius * radius * height; }

	int x1, y1;
	double height;
	double radius;
	double volume = 0;
};