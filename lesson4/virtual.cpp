#include <iostream>
#include <cmath>

class Shape {
	public:
	virtual float getS() = 0;
	virtual float getP() = 0;
};

class Point: public Shape {
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

class Circle: public Point {
        private:
                Point r;
        public:
                Circle(Point a,  Point r)
                        :Point(a)
                {
                        this->r = r;
                }
                ~Circle() {}
                void setR(Point r) {
                        this->r = r;
                }
                Point getR() {
                        return r;
                }
     		float R() {
     			return sqrt(pow(r.getX() - Point::getX(), 2) + pow(r.getY() - Point::getY(), 2));
      		}	
		virtual float getS() {
              		return M_PI * R() * R();
                }
                virtual float getP() {
            		return 2 * M_PI * R();
                }
                virtual void foo() {
                        std::cout << "I am CIRCLE - ";
                }
                void boo() {
                        std::cout << "CIRCLE" << std::endl;
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
              	virtual float getP() {
                        return sqrt(pow(a.getX() - Point::getX(), 2) + pow(a.getY() - Point::getY(), 2));
                }
                virtual void foo() {
                        std::cout << "I am LINE - ";
                }
                void boo() {
                        std::cout << "LINE" << std::endl;
                }

};

class Triangle: public Point {
       	private:
          	Point a;
    	        Point b;
      	public:
           	Triangle(Point a, Point b, Point c)
                     	:Point(c)
              	{ 
			this->a = a;
                      	this->b = b;
             	}
             	Triangle(const Triangle& t)
                      	:a(t.a)
                	,b(t.b)
           	{}
           	~Triangle() {}
         	void setA(Point a) {
              		this->a = a;
            	}
           	void setB(Point b) {
           		this->b = b;
              	}
             	Point getA() {
                      	return a;
              	}
               	Point getB() {
                     	return b;
              	}
         	float AB() {
                  	return sqrt(pow(a.getX() - b.getX(), 2) + pow(a.getY() - b.getY(), 2));
         	}
           	float BC() {
                     	return sqrt(pow(b.getX() - Point::getX(), 2) + pow(b.getY() - Point::getY(), 2));
          	}
          	float AC() {
                       	return sqrt(pow(a.getX() - Point::getX(), 2) + pow(a.getY() - Point::getY(), 2));
	        }
		virtual float getS() {
                    	float p = (AB() + BC() + AC()) / 2;
                       	return sqrt(p * (p-AB()) * (p-BC()) * (p-AC()));
                }
                virtual float getP() {
                     	return AB() + BC() + AC();
                }
                virtual void foo() {
                        std::cout << "I am TRIANGLE - ";
                }
                void boo() {
                        std::cout << "TRIANGLE" << std::endl;
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
		virtual float getS() {
                       	return lenght() * hight();
                }
                virtual float getP() {
                        return 2 * (lenght() + hight());
                }
                virtual void foo() {
                        std::cout << "I am RECTANGLE - ";
                }
                void boo() {
                        std::cout << "RECTANGLE" << std::endl;
                }

};

void printS(Shape* obj) {
        std::cout << obj->getS() << "  ";
}

void printP(Shape* obj) {
        std::cout << obj->getP() << std::endl;
}

int main() {
        Point P; Rectangle R((1,2), (8,7)); Triangle T((1,2), (5,6), (9,2)); Circle C(1,2); Line L(1,2);
	printS(&P); printP(&P);
	printS(&C); printP(&C);
	printS(&L); printP(&L);
        printS(&R); printP(&R);
        printS(&T); printP(&T);
        Point* p = &P; Point* r = &R; Point* t = &T; Point* c = &C; Point* l = &L;
        p->foo(); p->boo();
        r->foo(); r->boo();
        t->foo(); t->boo();
        c->foo(); l->boo();
        l->foo(); l->boo();

        return 0;
}

