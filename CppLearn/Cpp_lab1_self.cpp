//
// Prog 1
//
/*
#include <iostream>
#include <vector>

template<typename Container>
typename Container::const_iterator findNull (const Container& c)
{
    typename Container::const_iterator it;

    for (it = c.begin(); it < c.end(); ++it) {
        if (*it == 0) {
            break;
        }
    }
    return it;
}

int main() 
{
    int a = 10, b = 20, c = 30;
    std::vector<int*> v;

    v.push_back(&a);
    v.push_back(&b);
    v.push_back(&c);
    v.push_back(0); //Null pointer push to vector

    std::vector<int*>::const_iterator itr = findNull(v);

    if (itr == v.end()) {
        std::cout << "no null pointerfs in v" << std::endl;
    } else {
        std::vector<int*>::difference_type pos = itr - v.begin();
        std::cout << "null pointer is found at location: "
                  << pos << std::endl;
    }
    return 0;
}
*/

//
// Prog 2: findNUll in latest and optimized form
//
/*
#include <iostream>
#include <vector>

template<typename Container>
auto findNull(const Container& c)->decltype(c.begin())
//auto findNull(const Container& c)
{
    auto itr = c.begin();
    for(; itr < c.end(); ++itr) {
        if (*itr == nullptr) {
            break;
        }
    }

    return itr;
}

int main()
{
    int a = 10, b = 20, c = 30;

    std::vector<int*> v {&a, &b, &c, nullptr};

    auto it = findNull(v);

    if (it == v.end()) {
        std::cout << "no null pointers in v" << std::endl;
    } else {
        auto pos = it - v.begin();
        std::cout << "null pointer is at: " << pos << std::endl;
    }

    return 0;
}
*/

//
// Prog 3: static cast related example
//





//
//
// Prog  : Variadic examples: first in C
/*
#include <iostream>
#include <vector>
#include <stdarg.h>

int averInt(int count, ...)
{
    va_list ap;

    va_start(ap, count); // Initialize the argument list

    int i, sum = 0;
    for (i = 0; i < count; i++) {
        sum += va_arg(ap, int);
    }

    va_end(ap);

    return sum/i;
}

int main()
{
    std::cout << "averInt(3, 9, 12, 13): " <<averInt(3, 9, 12, 13) << std::endl;

    return 0;
}
*/

//
// Prog  : Variadic examples (only happens at compile time)
//         Consider to be recusion type: intermediate + terminal case handling
//
/*
#include <iostream>
#include <vector>

template<typename T>
auto sum(T a)
{
    return a;
}

template<typename T, typename... Y>
auto sum(T a, Y... args) {
    return a + sum(args...);
}

int main()
{
    std::cout << "sum(10, 20, 30, 40, 50) = " << sum(10,20,30,40,50) 
              << std::endl;
    
    return 0;
}
*/

//
// Prog  : Variadic template examples with mixed args and final solution
//
/*

template<typename T>
T sum(T sum)
{
    return sum;
}

template<typename T, typename... Y>
T sum(T a, Y... args)
{
    return a + sum(args...);
}
*/
/*
#include <iostream>
template<typename T>
auto sum(T sum)
{
    return sum;
}

template<typename T, typename... Y>
auto sum(T a, Y... args)
{
    return a + sum(args...);
}

template<typename... T>
auto avg(T... args)
{
    return sum(args...)/(sizeof... (args));
}

int main()
{
    std::cout << "sum(10, 20, 40, 50): " << sum(10,20,40,50) << std::endl;
    std::cout << "sum(10, 12.4, 40, 55): " << sum(10, 12.4, 40, 55) << std::endl;
    std::cout << "sum(10.0, 12.4, 40, 55): " << sum(10.0, 12.4, 40, 55) << std::endl;

    std::cout << "avg(10, 20, 40, 50): " << avg(10,20,40,50) << std::endl;
    std::cout << "avg(10, 12.4, 40, 55): " << avg(10, 12.4, 40, 55) << std::endl;
    std::cout << "avg(10.0, 12.4, 40, 55): " << avg(10.0, 12.4, 40, 55) << std::endl;
    return 0;
}
*/

//
// Prog  :constexpr usage
//

#include <iostream>

class Base {
public:
    virtual void func()
    {
        std::cout << "Base" << std::endl;
    }
};

class Derived: public Base {
public:
    void func() 
    {
        Base:func();
        std::cout << "Derived";
    }
};

int main() {
    Base *bp = new Derived;
    bp->func();

    return 0;
}
