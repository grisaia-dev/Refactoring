#pragma once
#include"shape.hpp"

template <typename T>
class transform {
public:
	transform(const T& sh);
	T shift(int m, int n, int k);
	T scaleX(int a);
	T scaleY(int d);
	T scaleZ(int e);
	T scale(int s);

private:
	T shape;
};

