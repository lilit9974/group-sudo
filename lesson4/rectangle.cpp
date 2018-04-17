#include <iostream>
class Point {
	protected: 
		float x, y;
	public:
		Point(float x=0, float y=0)  
			:x(x)
			,y(y) {}
		Point(const Point& P) 
			:x(P.x)
			,y(P.y)
		{}
		~Point() {}
};
class Rectangle: public Point {
	private:
		float a, b;
	public:
		Rectangle(float a=3, float b=3)
			:a(a)
			,b(b) {
			Point(0, 0);
			Point(a, 0);
			Point(a, b);
			Point(0, b);
		}
		~Rectangle() {}
		void set_A(float a) {
			this->a = a;
		}
		void set_B(float b) {
			this->b = b;
		}
		float get_A() {
			return a;
		}
		float get_B() {
			return b;
		}
		float Rectangle_S(float a, float b) {
			return a * b;
		}
		float Rectangle_P(float a, float b) {
			return 2 * (a + b);
		}
};

int main() {
	Rectangle R;
	std::cout << "Input a : ";
	float a;
	std::cin >> a;
	std::cout << "Input b : ";
	float b;
	std::cin >> b;
	std::cout << "S = " << R.Rectangle_S(a, b) << std::endl;
	std::cout << "P = " << R.Rectangle_P(a, b) << std::endl;
	return 0;
}
