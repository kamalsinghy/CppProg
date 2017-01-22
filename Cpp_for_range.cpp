#include <iostream>
#include <vector>

void f(std::vector<int> &v)
{
    for (auto x : v) {
        std::cout << x << std::endl;
    }

    for (auto& x:v) {
        ++x;
    }

    for (auto x : v) {
        std::cout << x << std::endl;
    }
}

int main ()
{
    std::vector<int> chain = { 10, 20, 30, 40 , 80, 130};
    f(chain);

    f(chain);

    for (auto x : {"Kamal", "Divya", "Atharv"}) {
        std::cout << x << std::endl;
    }

    return 0;
}
