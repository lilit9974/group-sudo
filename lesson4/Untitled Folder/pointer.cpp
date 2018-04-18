#include <iostream>
class Point {
	public:
		Point()  
		{}
		~Point() {}
        void print() {
            std::cout << "Point" << std::endl;
        }
};
class Rectangle: public Point {
	public:
		Rectangle()
			{}
		~Rectangle() {}
        void print() {
            std::cout << "Rectangle" << std::endl;
        }
};

int main() {
    Rectangle R;
    Point* a = &R;
    a->print();
	return 0;
}
