#include <iostream>
#include "list.h"

List::List() {
	lenght = 0;
	_head = Null;
	_tail = Null;
}
List::~List() {}
void List::insert(int _value) {
	Node *tmp = new Node();
	tmp->_value = _value;
	tmp->_next = Null;
	if (_head == Null) {
	_head = tmp;
	_tail = tmp;
	tmp = Null;
	} else {
		_tail->_next = tmp;
		_tail= tmp;
	}
	lenght++;
}
void List::remove(int _value) {
	struct Node* _nodik;
	_nodik = _head;
	if (_nodik == Null) {
		std::cout << "Not found" << std::endl;
	}
	while (_nodik->_next != Null) {
		if (_nodik->_value == _value) {
			_nodik->_next = _nodik->_next->_next;
		}
		_nodik = _nodik->_next;
	}
	std::cout << "Not found" << std::endl;
}
					 
Node *tmp = _head->next;
int List::find(int _value) {
	for (int i=0; i<=_lenght; ++i) {
		if (tmp != Null) {
			tmp = tmp->_next;
			return tmp->_value;
		} else {
			std::cout << "No" << std::endl;
			return -1;
		}
	}
}
int a = -1;
int& List::operator[](int i) {
	if (i > lenght) {
		std::cout << "Warning" << std::endl;
		return a;
	}
	if (i == 0) {
		return _head->_value;
	}
}
	
