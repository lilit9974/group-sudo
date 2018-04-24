struct Node {
	int _value;
	int *_next;
};
class List {
	private:
	unsigned int lenght = 0;
	Node* _head;
	Node* _tail;
	public:
	List() {};
	~List() {};
	int lenght;
	void insert(int _value);
	void remove(int _value);
	int find(int _value);
	int& operator[](int i);
};
	
