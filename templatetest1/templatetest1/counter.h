#pragma once
#include <iostream>

template <class T>
class Counter {
private:
	static int existingCounter;
	static int createdCounter;
public:
	Counter() {
		++existingCounter;
		++createdCounter;
	}
	static void check() {
		std::cout << "Created: " << createdCounter << std::endl;
		std::cout << "Existing: " << existingCounter << std::endl;
	}
protected:
	~Counter() {
		--existingCounter;
	}
};
template <typename T> int Counter<T>::existingCounter(0);
template <typename T> int Counter<T>::createdCounter(0);

class X : public Counter<X> {

};

class Y : public Counter<Y> {

};