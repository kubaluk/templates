#pragma once
#include <iostream>
#include <typeinfo>

template<class typ1, class typ2>
class Pair {
private:
	typ1 zmienna1;
	typ2 zmienna2;
public:
	Pair(typ1 _zmienna1, typ2 _zmienna2) :zmienna1(_zmienna1), zmienna2(_zmienna2){}
	void check_types() {
		std::cout << typeid(zmienna1).name() << std::endl;
		std::cout << typeid(zmienna2).name() << std::endl;
	}
};