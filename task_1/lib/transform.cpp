#include "transform.hpp"

template <typename T>
transform<T>::transform(const T& sh) {
	shape = sh;
}

template <typename T>
T transform<T>::shift(int m, int n, int k) {
	switch (shape.getType())
	{
	case TYPE::line:
		shape.points[0][0] += m; shape.points[0][1] += n;
		shape.points[1][0] += m; shape.points[1][1] += n;
		break;
	case TYPE::sqr:
		shape.points[0][0] += m; shape.points[0][1] += n;
		shape.points[1][0] += m; shape.points[1][1] += n;
		shape.points[2][0] += m; shape.points[2][1] += n;
		shape.points[3][0] += m; shape.points[4][1] += n;
		break;
	case TYPE::cube:
		shape.points[0][0] += m; shape.points[0][1] += n; shape.points[0][2] += k;
		shape.points[1][0] += m; shape.points[1][1] += n; shape.points[1][2] += k;
		shape.points[2][0] += m; shape.points[2][1] += n; shape.points[2][2] += k;
		shape.points[3][0] += m; shape.points[3][1] += n; shape.points[3][2] += k;
		shape.points[4][0] += m; shape.points[4][1] += n; shape.points[4][2] += k;
		shape.points[5][0] += m; shape.points[5][1] += n; shape.points[5][2] += k;
		shape.points[6][0] += m; shape.points[6][1] += n; shape.points[6][2] += k;
		shape.points[7][0] += m; shape.points[7][1] += n; shape.points[7][2] += k;
		break;
	}
	return shape;
}

template <typename T>
T transform<T>::scaleX(int a) {
	switch (shape.getType())
	{
	case TYPE::line:
		shape.points[0][0] *= a;
		shape.points[1][0] *= a;
		break;
	case TYPE::sqr:
		shape.points[0][0] *= a;
		shape.points[1][0] *= a;
		shape.points[2][0] *= a;
		shape.points[3][0] *= a;
		break;
	case TYPE::cube:
		shape.points[0][0] *= a;
		shape.points[1][0] *= a;
		shape.points[2][0] *= a;
		shape.points[3][0] *= a;
		shape.points[4][0] *= a;
		shape.points[5][0] *= a;
		shape.points[6][0] *= a;
		shape.points[7][0] *= a;
		break;
	}
	return shape;
}

template <typename T>
T transform<T>::scaleY(int d) {
	switch (shape.getType())
	{
	case TYPE::line:
		shape.points[0][1] *= d;
		shape.points[1][1] *= d;
		break;
	case TYPE::sqr:
		shape.points[0][1] *= d;
		shape.points[1][1] *= d;
		shape.points[2][1] *= d;
		shape.points[3][1] *= d;
		break;
	case TYPE::cube:
		shape.points[0][1] *= d;
		shape.points[1][1] *= d;
		shape.points[2][1] *= d;
		shape.points[3][1] *= d;
		shape.points[4][1] *= d;
		shape.points[5][1] *= d;
		shape.points[6][1] *= d;
		shape.points[7][1] *= d;
		break;
	}
	return shape;
}

template <typename T>
T transform<T>::scaleZ(int e) {
	switch (shape.getType())
	{
	case TYPE::line:
		shape.points[0][2] *= e;
		shape.points[1][2] *= e;
		break;
	case TYPE::sqr:
		shape.points[0][2] *= e;
		shape.points[1][2] *= e;
		shape.points[2][2] *= e;
		shape.points[3][2] *= e;
		break;
	case TYPE::cube:
		shape.points[0][2] *= e;
		shape.points[1][2] *= e;
		shape.points[2][2] *= e;
		shape.points[3][2] *= e;
		shape.points[4][2] *= e;
		shape.points[5][2] *= e;
		shape.points[6][2] *= e;
		shape.points[7][2] *= e;
		break;
	}
	return shape;
}

template <typename T>
T transform<T>::scale(int s) {
	switch (shape.getType())
	{
	case TYPE::line:
		shape.points[0][0] /= s; shape.points[0][1] /= s;
		shape.points[1][0] /= s; shape.points[1][1] /= s;
		break;
	case TYPE::sqr:
		shape.points[0][0] /= s;  shape.points[0][1] /= s;
		shape.points[1][0] /= s;  shape.points[1][1] /= s;
		shape.points[2][0] /= s;  shape.points[2][1] /= s;
		shape.points[3][0] /= s;  shape.points[3][1] /= s;
		break;
	case TYPE::cube:
		shape.points[0][0] /= s; shape.points[0][1] /= s; shape.points[0][2] /= s;
		shape.points[1][0] /= s; shape.points[1][1] /= s; shape.points[1][2] /= s;
		shape.points[2][0] /= s; shape.points[2][1] /= s; shape.points[2][2] /= s;
		shape.points[3][0] /= s; shape.points[3][1] /= s; shape.points[3][2] /= s;
		shape.points[4][0] /= s; shape.points[4][1] /= s; shape.points[4][2] /= s;
		shape.points[5][0] /= s; shape.points[5][1] /= s; shape.points[5][2] /= s;
		shape.points[6][0] /= s; shape.points[6][1] /= s; shape.points[6][2] /= s;
		shape.points[7][0] /= s; shape.points[7][1] /= s; shape.points[7][2] /= s;
		break;
	}

	return shape;
}
