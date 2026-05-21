#include <iostream>
{
    class point {
        protected:
        int x, y;
    public:
        point(int xx, int yy) : x(xx), y(yy){}
        void draw() {
            std::cout << x <<","<< y <<"에 점을 그려라.\n";
        }
    };

    class rectangle : public Point {
        private:
        int width, height;

        public:

        Rectangle(int xx, int yy, int w, int h)
        : Point(xx, yy), width(w), height(h) {}

        void draw() {
            cout << x << "," << y
            << "에 가로" << width
            << "에 세로" << height
            << "인 사각형을 그려라 \n";
        }
    };

    int main() {
        Rectangle r(2, 3, 100, 200);
        r.draw();

        return 0;
    }
}
