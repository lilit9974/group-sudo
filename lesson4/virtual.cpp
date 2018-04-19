#include <iostream>
#include <cmath>

class Shape {
	public:
		virtual float getS() = 0;
		virtual float getP() = 0;
};

class Point: public Shape {
        public:
		virtual float getS() {
			return 10;
		}
		virtual float getP() {
			return 11;
		}
		virtual void foo() {
			std::cout << "I am POINT - ";
		}
		void boo() {
			std::cout << "POINT" << std::endl;
		}
};

class Rectangle: public Point {
        public:
		virtual float getS() {
			return 20;
		}
		virtual float getP() {
			return 21;
		}
		virtual void foo() {
			std::cout << "I am RECTANGLE - ";
		}
		void boo() {
			std::cout << "RECTANGLE" << std::endl;
		}
};

class Triangle: public Point {
	public:
		virtual float getS() {
			return 30;
		}
		virtual float getP() {
			return 31;
		}
		virtual void foo() {
			std::cout << "I am TRIANGLE - ";
		}
		void boo() {
			std::cout << "TRIANGLE" << std::endl;
		}
};

class Circle: public Point {    
        public:
		virtual float getS() {
			return 40;
		}
		virtual float getP() {
			return 41;
		}
		virtual void foo() {
			std::cout << "I am CIRCLE - ";
		}
		void boo() {
			std::cout << "CIRCLE" << std::endl;
		}
                
};

class Line: public Point {
        public:
		virtual float getS() {
			return 50;
		}
		virtual float getP() {
			return 51;
		}
		virtual void foo() {
			std::cout << "I am LINE - ";
		}
		void boo() {
			std::cout << "LINE" << std::endl;
		}
};

void printS(Shape* obj) {
	std::cout << obj->getS() << "  ";
}

void printP(Shape* obj) {
	std::cout << obj->getP() << std::endl;
}

int main() {
	Point P; Rectangle R; Triangle T; Circle C; Line L; 
	printS(&P);
	printP(&P);
	printS(&R);
	printP(&R);
	printS(&T);
	printP(&T);
	printS(&C);
	printP(&C);
	printS(&L);
	printP(&L);
	Point* p = &P; Point* r = &R; Point* t = &T; Point* c = &C; Point* l = &L;
	p->foo(); p->boo();
	r->foo(); r->boo();
	t->foo(); t->boo();
	c->foo(); l->boo();
	l->foo(); l->boo();
	
	return 0;
}
