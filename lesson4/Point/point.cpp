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
        unsigned int r;
    public:
        Circle(unsigned int r, float x = 0, float y = 0) 
            :r(r) {
                setX(x);
                setY(y);
            }
        ~Circle() {}
        void setR(unsigned int r) {
            this->r = r;
        }
        unsigned int getR() {
            return r;
        }
        float circle_L(unsigned int r, float x, float y) {
            return 2 * M_PI * r;
        }
        float circle_S(unsigned int r, float x, float y) {
            return M_PI * r * r;
        }
};

class Line: public Point {
    private:
        float a, b;
    public:
        Line(float x, float y, float a, float b) {
            
        }
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
        float line_L(float x, float y, float a, float b) {
            return std::sqrt((x - a) * (x - a) + (y - b) * (y - b));
        }
};


