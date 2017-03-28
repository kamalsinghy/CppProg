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
    B b3 = std::move(b1);
}

int add(int a, int b)
{
    std::cout << __PRETTY_FUNCTION__ << "=";
    return a+b;
}

auto addTrailReturn(int a, int b) -> int
{
    std::cout << __PRETTY_FUNCTION__ << "=";
    return a+b;
}

auto addDeclType(int a , float b) -> decltype(a+b)
{
    std::cout << __PRETTY_FUNCTION__ << "=";
    return a+b;
}

int main()
{
    std::cout << add(10,15) << std::endl;
    std::cout << addTrailReturn(100, 150) << std::endl;
    std::cout << addDeclType(150, 140.5) << std::endl;
}

enum class platform : int { ELIT = 6, U8 = 3, XELLENT = 12 };

template <typename argType>
constexpr auto to_underlying(argType arg)
{
//    return static_cast<std::underlying_type_t<argType>>(arg);
    return std::underlying_type_t<argType>(arg);
}

constexpr auto MAX_PE = 6;
constexpr auto XELLENT_PE = to_underlying(platform::XELLENT);

int main()
{
    static_assert(XELLENT_PE == MAX_PE, "XELLENT has 12 PEs");
    return 0;
}
#include <vector>

using namespace std;

vector<double> v1(7);
vector<double> v2{10, 20, 30};

int main()
{
    for(auto x : v2) {
        cout << "v1 element: "<< x << endl;
    }
    return 0;
}

char x0{7};
char x1(4);

int main()
{
    std::cout << "x = " << x0 << std::endl;
    std::cout << "x1 = " << x1 << std::endl;
    return 0;
}

class A {
public:
    A() { std::cout << "A's blank constructor" << std::endl;}
    A(int a_val) : a(a_val) { std::cout << "A's single constructor" << std::endl;}
    int a;
    int b = 5;
    void show() { std::cout << "a = " << a << std::endl;
                  std::cout << "b = " << b << std::endl; }
};

int main()
{
    A a(5);
    a.show();
    return 0;
}

// Suffix return type syntax

template <class T, class U>
auto mul(T x, U y)->decltype(x*y)
{
    return x*y;
}

int main()
{
    std::cout << "Multiply = " << mul(4,5) << std::endl;
}
*/

//NOTE: Template alias is very good feature to use with "using" which
// is being used even with templates which is not possible with
// typedef

// Variadic Template


