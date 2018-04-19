#include <iostream>
#include "POINT.cpp"

class Rectangle: public Point {
	private:
		Point a;
	public:
		Rectangle(Point a,Point b)
			:Point(b)
			{
		    this->a = a;
        }
		Rectangle(const Rectangle& r)
			:a(r.a) {}
		~Rectangle() {}
		void setA(Point a) {
			this->a = a;
		}
		Point getA() {
			return a;
		}
        float lenght() {
            return a.getX() - Point::getX();
        }
        float hight() {
            return a.getY() - Point::getY();
        }
		float Rectangle_S() {
			return lenght() * hight();
    	}
		float Rectangle_P() {
			return 2 * (lenght() + hight());
		}
};

int main() {
	std::cout << "Input a : ";
	float a;
	std::cin >> a;
	std::cout << "Input b : ";
	float b;
	std::cin >> b;
    Point p(a, b);
	std::cout << "Input c : ";
	float c;
	std::cin >> c;
	std::cout << "Input d : ";
	float d;
	std::cin >> d;
    Point pp(c,d);
	Rectangle R(p,pp);
	std::cout << "S = " << R.Rectangle_S() << std::endl;
	std::cout << "P = " << R.Rectangle_P() << std::endl;
	return 0;
}
