#include <iostream>
#include "vector.h"

int main() {
	Vector v;
	std::cout << "Vector." << std::endl;
	int a = 1;
	for (int i=0; i<7; ++i) {
		v[i] == a;
		a++;
	}
	v.print();
	std::cout << "Vector - insert" << std::endl;
	v.insert(0, 22);
	v.insert(3, 22);
	v.insert(6, 22);
	v.print();
	std::cout << "Vector - remove" << std::endl;
	v.remove(0);
	v.remove(3);
	v.print();
	std::cout << "Vector - resize" << std::endl;
	v.resize(3);
	v.print();
	std::cout << "Find the index of number 5" << std::endl;
	std::cout << v.find(5);
	std::cout << std::endl;
	return 0;
}
	
	
