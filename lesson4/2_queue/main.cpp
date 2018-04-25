#include <iostream>
#include "queue.h"

int main() {
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.dequeue();
	q.print();
	std::cout << std::endl;
	std::cout << "Lenght of vector = "  << q.getLenght() << std::endl;
	return 0;

}
