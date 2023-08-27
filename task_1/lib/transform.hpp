#pragma once
//#include"shape.hpp"

template <typename T>
class transform {
public:
	transform(const T& sh) { shape = sh; }

	T shift(int x, int y, int z = 0) {
		const size_t row = shape.points.size();
		const size_t col = shape.points[0].size();
		for (int i = 0; i < row; ++i)
			shape.points[i][0] += x;

		for (int i = 0; i < row; ++i)
			shape.points[i][1] += y;

		if (col == 3)
			for (int i = 0; i < row; ++i)
				shape.points[i][2] += z;
		return shape;
	}

	T scaleX(int x) {
		const size_t size = shape.points.size();
		for (int i = 0; i < size; ++i)
			shape.points[i][0] *= x;
		return shape;
	}

	T scaleY(int y) {
		const size_t size = shape.points.size();
		for (int i = 0; i < size; ++i)
			shape.points[i][1] *= y;
		return shape;
	}

	T scaleZ(int z) {
		const size_t size = shape.points.size();
		for (int i = 0; i < size; ++i)
			shape.points[i][2] *= z;
		return shape;
	}

	T scale(int s) {
		for (auto& points : shape.points)
			for (auto& point : points)
				point /= s;
		return shape;
	}

private:
	T shape;
};

