#include <iostream>
#include <cmath>
class Circle {
    double pi = 3.14;
    private:
        unsigned int r;
        float x, y;
        char *name;
    public:
        Circle(char* name = "Lilit", float x = 0, float y = 0, unsigned r = 5)
            : name(name), x(x), y(y), r(r) {}
        ~Circle() {}
        float get_X() {
            return x;
        }
        float get_Y() {
            return y;
        }
        unsigned int get_R() {
            return r;
        }

        char get_Name() {
            return *name;
        }
        void set_X(float x) {
            this->x = x;
        }
        void set_Y(float y) {
            this->y= y;
        }
        void set_R(unsigned int r) {
            this->r = r;
        }
        void set_Name(char* name) {
            (*this).name = name;
        }
        float Circle_L(unsigned int r) {
            return 2 * pi * r;
        }
        float Circle_S(unsigned int r) {
            return pi * r * r;
        }
        float operator*(int a) {
            return  r * a;
        }
};

int main() {
	Circle C("Lilit", 1, 2, 3);
	std::cout << "L = " << C.Circle_L(3) << std::endl;
	std::cout << "S = " << C.Circle_S(3) << std::endl;
	return 0;
}
