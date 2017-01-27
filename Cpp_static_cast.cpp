#include <iostream>

class X {
public:
    X() { std::cout << "Constructor" << std::endl;}
    ~X() { std::cout << "Destructor" << std::endl;}
    void display() { std::cout << "Display X" << std::endl; }
};

class A : public X {
public:
    A() { std::cout << "A const" << std::endl; }
    ~A() { std::cout << "A dest" << std::endl; }
    void display() { std::cout << "Display A" << std::endl; }
};

int main()
{
    X z;

    std::cout << "now second part" << std::endl;

    auto y = "A";

    void *str = static_cast<void*>(&y);
    X *x = static_cast<X*>(str);

    x->display();

    return 0;
}
