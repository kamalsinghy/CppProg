#include <iostream>
/*
class X {
    private:
        int a;

    public:
        X() {};
        X(const X&) = delete;
        X& operator=(const X&) = delete;
};

int main ()
{
    X x,y;
    x = y;

    X z(x);

    return 0;
}
*/

class Y {
    private:
        int b;
    public:
        Y() {};
        Y(const Y&) = default;
        Y& operator=(const Y&) = default;
};

int main()
{
    Y x, y;
    x = y;

    return 0;
}
