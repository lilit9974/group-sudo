class Vector {
    private:
	unsigned int _lenght;
	int *_arr;
    public:
	Vector(unsigned int lenght = 7);
	Vector(const Vector& vector);
	~Vector();
	int get_lenght();
        void insert(unsigned int index, unsigned int a);
	void remove(unsigned int index);
	int resize(unsigned int n);
	int find(unsigned int a);
	int operator[](unsigned int index);
	void erace(unsigned int m);
	void print();
};
