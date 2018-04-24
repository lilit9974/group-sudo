class Queue {
	private:
		unsigned int _lenght = 7;
		unsigned int _head = _lenght;
		unsigned int _tail = _lenght;
		int *_arr; 		
	public:
		Queue(unsigned int _lenght = 7);
		Queue(const Queue& queue);
		~Queue();
		void enqueue(unsigned int a);
		int dequeue();
		int lenght();
		bool isEmpty();
		bool isFull();
};
