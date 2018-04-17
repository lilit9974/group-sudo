#include <iostream>
#include <cmath>
class Point {
    	private:
        	float x, y;
    	public:
        	Point(float x = 0, float y = 0) 
            		:x(x)
            		,y(y) {}
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

};

class Circle: public Point {
    	private:
        	int r;
    	public:
	      	Circle(int r=5, float x=1, float y=2) 
			:Point(x,y) 
		{
			this->r = r;
		}
        	~Circle() {}
        	void setR(int r) {
            		this->r = r;
        	}
        	int getR() {
            		return r;
        	}
		float get_L() {
            		return 2 * M_PI * getR();
        	}
        	float get_S() {
            		return M_PI * getR() * getR();
        	}
};

class Line: public Point {
    	private:
		float a,b;
   	public:
        	Line(float a=1, float b=2, float x=3, float y=4)
			:Point(x,y) 
			,a(a)
			,b(b)
		{}
        	~Line() {}
        	void setA(float a) {
            		this->a = a;
        	}
        	float getA() {
            		return a;
        	}
        	void setB(float b) {
            		this->b = b;
        	}
        	float getB() {
            		return b;
        	}
        	float line_L() {
			float L = sqrt(pow(getA() - getX(), 2) + pow(getB() - getY(), 2)); 
            		return L;
        	}
};

int main() {
	Circle C;
	Line L;
	std::cout << "Circle L = " << C.get_L() << std::endl;
	std::cout << "Circle S = " << C.get_S() << std::endl;
	std::cout << "Line L = " << L.line_L() << std::endl;
	return 0;
}
