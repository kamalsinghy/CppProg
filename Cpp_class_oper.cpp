#include <iostream>

class X {
private:
    X *x;

public:
    X& operator=(const X&) = delete;
};

int main()
{
    X x, y;

    return 0;
}
