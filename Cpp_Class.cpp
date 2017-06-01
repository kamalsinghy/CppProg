#include <iostream>

class B {
public:
    B() { std::cout << "B constructor" << std::endl; }
    ~B() { std::cout << "B destructor" << std::endl; }
    void display() { std::cout << "Display member method" << std::endl; }
private:
    char x;
};

class C {
public:
    C() { std::cout << "C constructor" << std::endl; }
    ~C() { std::cout << "C destructor" << std::endl; }
    virtual void display() { std::cout << "Display member method" << std::endl; }
private:
    char y;
    char z;
    int a;
};

int main()
{
    B b;
    C c;

    std::cout << "Size of B: " << sizeof(b) << std::endl;
    std::cout << "Size of C: " << sizeof(c) << std::endl;

    return 0;
}
