#include <iostream>

class B {
    int i = 10;
    void printNum() { std::cout << "Num: "<< i << std::endl; }
};

int main()
{
    B b;

    b.printNum();

    return 0;
}
