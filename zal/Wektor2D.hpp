class Wektor2D
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
        std::cout << "Goodbye, " << "...\n";
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
