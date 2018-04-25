#include <iostream>
#include "queue.h"

Queue::Queue(unsigned int lenght) 
	:_size(lenght)
	,_lenght(0)
	,_head(0)
	,_tail(0)
	{
	_arr = new int[_size];
}

Queue::Queue( Queue& queue) 
	:_size(queue._size)
	,_lenght(queue._lenght)
	,_head(queue._head)
	,_tail(queue._tail)
	{
	_arr = new int[_size];
	unsigned int i = _arr[_head];
	do {
		_arr[i] = queue._arr[i];
		i = (i+1) % _size;
	} while (i != _tail);
}

Queue::~Queue() {
	delete []_arr;
}

unsigned int Queue::getLenght() {
	return _lenght;
}

bool Queue::isEmpty() {
	return (_lenght == 0);
}

bool Queue::isFull() {
	return (_lenght == _size);
}

void Queue::enqueue(int a) {
	if(!isFull()) {
		_arr[_tail] = a;
		++_lenght;
		_tail = (_tail + 1) % _size;
	} else { 
		std::cout << "Error: Queue is full." << std::endl;
	}
}
int Queue::dequeue() {
	if (!isEmpty()) {
		_lenght--;
		int i = _arr[_head];
		_head = (_head + 1) % _size;
		return i;
	} else {
		std::cout << "Error: Queue is empty." << std::endl;
		return -1;
	}
}

void Queue::print() {
	if(_lenght == 0) {
		std::cout << "Queue is empty." << std::endl;
	}
	for (int i=_head; i<_tail; ++i) {
		std::cout << _arr[i] << " ";
	}
}
		
