#include <iostream>

class X {
public:
    X(std::string addr): check(addr) { std::cout << check << std::endl;}
    ~X() {}
    std::string check;
    enum State {ONE, TWO};
};

class Y final : public X {
public:
//    Y(std::string addr) : X(addr) { std::cout << check << std::endl; }
    Y() : X("yes") { std::cout << check << std::endl;}
    ~Y() {}
    void display() { std::cout << "there is" << check << std::endl; }
};

int main()
{
    X x("cut");
//    Y y("uncut");
    Y y;

    std::cout << X::State::ONE << std::endl;

    y.display();
    return 0;
}
