#include <iostream>
#include "queue.h"

Queue::Queue(unsigned int lenght) {
	_lenght = lenght;
	_arr = new int[_lenght];
}
Queue::Queue(const Queue& queue) {
	this->_arr = queue._arr;
}
Queue::~Queue() {
	delete []_arr;
}
void Queue::enqueue(unsigned int a) {
	if(_head != 0) {
		_arr[_head--] = a;
	} else { 
		std::cout << "Queue is full." << std::endl;
	}
}
int Queue::dequeue() {
	if (_head == _lenght) {
		std::cout << "There is no member in queue" << std::endl;
	return 0;
	}
	return _arr[_tail--];
	}
int Queue::lenght() {
	return _lenght;
}
		
