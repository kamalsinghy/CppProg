#include <iostream>

class B;
using Bptr = std::unique_ptr<B>;

class B {
public:
    B() { std::cout << "B constructor" << std::endl; }
/*
    B(const B&) = delete;
    B& operator=(const B&) = delete;
    B(B&&) = delete;
    B& operator=(B&&) = delete;
*/
    B(const B&) = default;
    B& operator=(const B&) = default;
 //   B(B&&) = default;
 //   B& operator=(B&&) = default;

//    ~B() { std::cout << "B desctructor" << std::endl; }

private:
};

static void checkfunc(Bptr b) {
    std::cout << "Entered checkfun" << std::endl;
}

int main()
{
    Bptr bptr = std::make_unique<B>();

    checkfunc(bptr);

    return 0;
}
