#include <iostream>

template <typename Derived>
class Base {
public:
    Base() { std::cout << "Base constructor" << std::endl; }
    virtual ~Base() { std::cout << "Base destructor" << std::endl; }

    void display() {
        static_cast<Derived*>(this)->display();
    }
private:
};

class DerivedA: public Base<DerivedA>
{
public:
    DerivedA() { std::cout << "DerivedA constructor" << std::endl; }
    ~DerivedA() { std::cout << "DerivedA destructor" << std::endl; }

    void display() { std::cout << "DerivedA display" << std::endl; }
};

int main()
{
    std::unique_ptr<Base<DerivedA>> B = std::make_unique<DerivedA>();
    B->display();
}

