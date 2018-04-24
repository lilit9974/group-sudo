#include <iostream>
#include "vector.h"

Vector::Vector(unsigned int lenght) {
	_lenght = 2 * lenght;
	_arr = new int[_lenght];
}
Vector::Vector(const Vector& vector) {
	this->_arr = vector._arr;
}
Vector::~Vector() {
	delete[]_arr;
}
int Vector::get_lenght() {
	return _lenght;
}
void Vector::insert(unsigned int index, unsigned int a) {
	for (int i=index; i < _lenght; ++i) {
		_arr[i] = _arr[i-1];
	}
	_arr[index] = a;
}
void Vector::remove(unsigned int index) {
	if (index <= _lenght) {
		for (int i=index; i<_lenght-1; ++i) {
			_arr[i] = _arr[i+1];
		}
		_arr[index] = 0;
	}
}
void Vector::erace(unsigned int m) {
	for (int i=m; i<_lenght; ++i) {
		_arr[i] = 0;
	}
}
int Vector::resize(unsigned int n) {
	int m = 2 * n;
	if (m = _lenght) {
		return 0;
	}
	if (m < _lenght) {
		 erace(m);
		return 0;
	}
	int *arr = new int(_lenght);
	for (int i = 0; i<_lenght; ++i) {
		arr[i] = _arr[i];
	}
	delete []_arr;
	_arr = arr;
	_lenght = m;
	return 0;
}
int Vector::find(unsigned int a) {
	for (int i=0; i<_lenght; ++i) {
		if (_arr[i] == a) {
			return i+1;
		}
	}
}
int Vector::operator[](unsigned int index) {
	if (index > _lenght) {
		std::cout << "Error" << std::endl;
		return -1;
	}
	return _arr[index];
}
void Vector::print() {
	for (int i=0; i<_lenght; ++i) {
		std::cout << _arr[i] << " ";
	}
	std::cout << std::endl;
}
