#include <iostream>
#include <tuple> 

int main()
{
    std::tuple<int, char> foo(10, 'x');

    auto bar = std::make_tuple("test", 3.1, 14, 'y');

    std::get<2>(bar) = 100;

    int myint;
    char mychar;

    std::tie(myint, mychar) = foo;

    std::cout << "myint: " << myint << " mychar: " << mychar << std::endl;

    std::tie(std::ignore, std::ignore, myint, mychar) = bar;

    std::cout << "myint: " << myint << " mychar: " << mychar << std::endl;

}
