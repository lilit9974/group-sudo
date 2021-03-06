#ifndef QUEUE
#define QUEUE

class Queue {
	private:
		const unsigned int _size;
		unsigned int _lenght;
		unsigned int _head;
		unsigned int _tail;
		int *_arr; 		
	public:
		Queue(unsigned int =7);
		Queue(Queue&);
		~Queue();
		unsigned int getLenght();
		void enqueue(int);
		int dequeue();
		bool isEmpty();
		bool isFull();
		void print();
};

#endif
