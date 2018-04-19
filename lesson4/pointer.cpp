#include <iostream>
class Point {
	protected:
		int x, y;
	public:
		Point(int x=0, int y=0)  
			:x(x)
			,y(y)
		{}
		~Point() {}
	void setX(int x) {
                        this->x = x;
                }
                Point getX() {
                        return x;
                }
	void setY(int y) {
                        this->y = y;
                }
                Point getY() {
                        return y;
                }
        void foo() {
            std::cout << "Point" << std::endl;
        }
	virtual void boo() {
	    std::cout << "V Point" << std::endl;
	}
};
class Rectangle: public Point {
	private:
		Point a;
	public:
		Rectangle(Point a, Point b)
			:Point(b)
			{
			this->a = a;
			}
		~Rectangle() {}
		void setA(Point a) {
                        this->a = a;
                }
                Point getA() {
                        return a;
                }

        void foo() {
            std::cout << "Rectangle" << std::endl;
        }
	virtual void boo() {
	    std::cout << "V Rect" << std::endl;
	}
};

int main() {
    Rectangle R((1, 2), (3, 4));
    Point* a = &R;
    a->foo();
    a->boo();
	return 0;
}
