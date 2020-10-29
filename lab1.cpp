#include <iostream>
#include <math.h>

struct Wektor2D
{
public:
    Wektor2D()
    {
        x = 0;
        y = 0;
    }

    Wektor2D(double xin, double yin)
    {
        x = xin;
        y = yin;
    }

    ~Wektor2D()
    {
        std::cout << "Goodbye, "
                  << "...\n";
    }

    void   setX(double xin) { x = xin; }
    double getX() { return x; }
    void   setY(double yin) { y = yin; }
    double getY() { return y; }
    void   print() { std::cout << x << " " << y << '\n'; }

private:
    double x;
    double y;
};

Wektor2D operator+(Wektor2D wek1, Wektor2D wek2)
{
    double x = wek1.getX() + wek2.getX();
    double y = wek1.getY() + wek2.getY();
    return Wektor2D{x, y};
}

double operator*(Wektor2D wek1, Wektor2D wek2)
{
    return wek1.getX() * wek2.getX() + wek1.getY() * wek2.getY();
}

int main()
{
    Wektor2D Adam{3, 4};
    Wektor2D Wiesiek(5, 12);
    Wektor2D dodany = Adam + Wiesiek;
    dodany.print();
    std::cout << Adam * Wiesiek << '\n';

}
