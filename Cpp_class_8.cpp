#include <iostream>
#include <memory>

class D1;

class B {
public:
    B() {};
    ~B() {};

    virtual void display(void) { std::cout << "B's display" << std::endl; }
};

class D : public B {
public:
    D() {}
    ~D() {}

    void display(void) final override { std::cout << "D's display" << std::endl; }
};

int main()
{
    //auto b = std::make_shared<D>();
    auto b = std::make_shared<D1>();

    b->display();
}
