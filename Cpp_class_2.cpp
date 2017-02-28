#include <iostream>
#include <map>

class X {
public:
    X() = default;
    ~X() = default;
    void display() { std::cout << "X" << __PRETTY_FUNCTION__ << std::endl; }

protected:
    uint32_t check;
};

class Y : public X {
public:
    Y() = default;
    ~Y() = default;
    static void display() { std::cout << "Y" << __PRETTY_FUNCTION__ << std::endl; }
    void encap(void (*f)(void)) { std::cout << "encap" << std::endl; f(); }
protected:
    
};

int main ()
{
    X x;
    Y y;

    y.display();
    y.encap(Y::display);

    return 0;
}
