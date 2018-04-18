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
        void set_X(float x) {
            this->x = x;
        }
        float get_X() {
            return x;
        }
        void set_Y(float y) {
            this->y = y;
        }
        float get_Y() {
            return y;
        }

};

