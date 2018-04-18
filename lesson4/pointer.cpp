#include <iostream>
class Point {
	public:
		Point()  
		{}
		~Point() {}
        void foo() {
            std::cout << "Point" << std::endl;
        }
	virtual void boo() {
	    std::cout << "V Point" << std::endl;
	}
};
class Rectangle: public Point {
	public:
		Rectangle()
			{}
		~Rectangle() {}
        void foo() {
            std::cout << "Rectangle" << std::endl;
        }
	virtual void boo() {
	    std::cout << "V Rect" << std::endl;
	}
};

int main() {
    Rectangle R;
    Point* a = &R;
    a->foo();
    a->boo();
	return 0;
}
