#include <iostream>
#include "funkcje.h"
#include "point.h"
#include "pair.h"
#include "counter.h"

int main() {

	//1
	print(5);
	print(10.75);
	print("test");

	//3
	Point<int> point1(1, 2);
	Point<unsigned int> point2(-1, 5);
	Point<float> point3(100.117, 112.97);
	point1.print();
	point2.print();
	point3.print();

	//4
	Pair<char, int> pair1('A', 7);
	pair1.check_types();
	{
	X tmp1, tmp2, tmp3;
	Y tmpa;
	Counter<X>::check();
	Counter<Y>::check();
	}
	Counter<X>::check();
	Counter<Y>::check();
	return 0;
}