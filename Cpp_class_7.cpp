#include <iostream>
#include <memory>

class B {
public:
    B() { std::cout << "B's constructor" << std::endl;}
    ~B() { std::cout << "B's destructor" << std::endl; }

    virtual void display() = 0;
};

class D1 : public B {
public:
    D1() { std::cout << "D1's constructor" << std::endl;}
    ~D1() { std::cout << "D1's destructor" << std::endl; }

    virtual void display() override {
        std::cout << "D1's display" << std::endl;
    }
};

class D2 : public D1 {
public:
    D2() { std::cout << "D2's constructor" << std::endl;}
    ~D2() { std::cout << "D2's destructor" << std::endl; }

    void display() final override {
        std::cout << "D2's display final override" << std::endl;
    }
};

int main ()
{
    std::shared_ptr<B> b;
    b = std::dynamic_pointer_cast<D2>(std::make_shared<D2>());
//    B *b = std::dynamic_cast<D2*>(std::shared_ptr<D2*>());

    b->display();
}
