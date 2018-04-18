#include <iostream>
#include <cmath>
#include "POINT.cpp"

class Circle: public Point {
    	private:
        	Point r;
    	public:
	      	Circle(Point a, Point r) 
			:Point(a) 
		{
			this->r = r;
		}
        	~Circle() {}
        	void set_R(Point r) {
            		this->r = r;
        	}
        	Point get_R() {
            		return r;
        	}
		float R() {
			return sqrt(pow(r.get_X() - Point::get_X(), 2) + pow(r.get_Y() - Point::get_Y(), 2));
		}
		float get_L() {
            		return 2 * M_PI * R();
        	}
        	float get_S() {
            		return M_PI * R() * R();
        	}
};

class Line: public Point {
    	private:
		Point a;
   	public:
        	Line(Point a, Point b)
			:Point(b) 
		{
			this->a = a;
		}
        	~Line() {}
        	void setA() {
            		this->a = a;
        	}
        	Point getA() {
            		return a;
        	}
        	float line_L() {
			return sqrt(pow(a.get_X() - Point::get_X(), 2) + pow(a.get_Y() - Point::get_Y(), 2));
        	}
		void foo() {
			float k = (a.get_Y() - Point::get_Y()) / (a.get_X() - Point::get_X());
			float b = (Point::get_Y() - Point::get_X()) * k;
			for (int x = Point::get_X(); x < a.get_X(); ++x) {
				std::cout << "x = " << x << " ";
				std::cout << "y = " << k * x + b << std::endl;
	}
		}
};

int main() {
	int a, b, c, d;
	std::cout << "Input a : ";
	std::cin >> a;
	std::cout << "Input b : ";
	std::cin >> b;
	std::cout << "Input c : ";
	std::cin >> c;
	std::cout << "Input d : ";
	std::cin >> d;
	Point p(a, b);
	Point pp(c, d);
	Circle C(p, pp);
	Line L(p, pp); 
	std::cout << "Circle L = " << C.get_L() << std::endl;
	std::cout << "Circle S = " << C.get_S() << std::endl;
	std::cout << "Line L = " << L.line_L() << std::endl;
	std::cout << '\n';
	L.foo();
	return 0;
}
