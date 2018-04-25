class Vector {
    private:
	unsigned int _lenght;
	int *_arr;
    public:
	Vector(unsigned int lenght = 7);
	Vector(const Vector&);
	~Vector();
	int& operator[](unsigned int);
	unsigned int get_lenght();
        void insert(unsigned int, int);
	void remove(unsigned int);
	int resize(unsigned int);
	int find(int);
	void erace(unsigned int);
	void print();
};
