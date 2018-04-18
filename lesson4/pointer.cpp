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
        void setX(float x) {
            this->x = x;
        }
        float getX() {
            return x;
        }
        void setY(float y) {
            this->y = y;
        }
        float getY() {
            return y;
        }
        void print() {
            std::cout << "Point" << std::endl;
        }
};
class Rectangle: public Point {
	private:
		Point a;
	public:
		Rectangle()
			{}
		~Rectangle() {}
		void set_A(Point a) {
			this->a = a;
		}
		Point get_A() {
			return a;
		}
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
