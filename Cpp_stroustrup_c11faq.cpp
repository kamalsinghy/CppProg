#include <iostream>

//
// Auto examples are understood, deduce type of variable based on 
// initializer list
//

//
// Range-for statement
// All standard containers can be used as a range
//
/*
#include <vector>

void f(std::vector<double>& v)
{
    std::cout << "Elements are: " << std::endl;
    for (auto x : v) {
        std::cout << x << " " << std::endl;
    }
}

int main()
{
    std::vector<double> vec{10.2, 20, 30, 40.5};

    f(vec);
}
*/

class B {
public:
    B() { std::cout << "B constructor" << std::endl; }
    ~B() { std::cout << "B destructor" << std::endl; }
    //B(const B&) = delete;
    B& operator=(const B&) = delete;
};

int main()
{
    B b1;
    B b2(b1);
    B b3;
    b3 = b2;
}
