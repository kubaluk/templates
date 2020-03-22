#pragma once
#include <iostream>

class Point {
private:
	int x;
	int y;
public:
	Point(int _x, int _y) :x(_x), y(_y){}
	void print() {
		std::cout << "x: " << x << std::endl;
		std::cout << "y: " << y << std::endl;
	}
};