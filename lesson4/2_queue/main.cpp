#include <iostream>
#include "queue.h"

int main() {
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	std::cout << q.dequeue() << " " << q.dequeue() << " " << q.dequeue() << std::endl;
	return 0;
}
