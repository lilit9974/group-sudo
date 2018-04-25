#include <iostream>
#include "vector.h"

Vector::Vector(unsigned int lenght) {
	_lenght = 2 * lenght;
	_arr = new int[_lenght];
}

Vector::Vector(const Vector& vector) 
	:_lenght(vector._lenght)
	{
	this->_arr = new int[_lenght];
	for (int i=0; i<_lenght; ++i) {
		_arr[i] = vector._arr[i];
	}
}
Vector::~Vector() {
	delete[]_arr;
}

int& Vector::operator[](unsigned int index) {
	int a = -1;
	if (index > _lenght) {
		std::cout << "Error: Index isn't true" << std::endl;
		return a;
	}
	return _arr[index];
}

unsigned int Vector::get_lenght() {
	return _lenght;
}

void Vector::insert(unsigned int index, int v) {
	for (int i=_lenght-1; i>index; --i) {
		_arr[i] = _arr[i-1];
	}
	_arr[index] = v;
}

void Vector::remove(unsigned int index) {
	if (index < _lenght) {
		for (int i=index; i<_lenght-1; ++i) {
			_arr[i] = _arr[i+1];
		}
		_arr[_lenght-1] = 0;
	}
}

void Vector::erace(unsigned int m) {
	for (int i=m; i<_lenght; ++i) {
		_arr[i] = 0;
	}
}
int Vector::resize(unsigned int n) {
	int m = 2 * n;
	if (m == _lenght) {
		return -1;
	}
	if (m < _lenght) {
		 erace(m);
		return -1;
	}
	int *arr = new int(m);
	for (int i = 0; i<_lenght; ++i) {
		arr[i] = _arr[i];
	}
	delete []_arr;
	_arr = arr;
	_lenght = m;
	return 0;
}

int Vector::find(int a) {
	for (int i=0; i<_lenght; ++i) {
		if (_arr[i] == a) {
			return i;
		}
	std::cout << "Error: Vector hasn't this member" << std::endl;
	return -1;
	}
}
void Vector::print() {
	for (int i=0; i<_lenght; ++i) {
		std::cout << _arr[i] << " ";
	}
	std::cout << std::endl;
}
