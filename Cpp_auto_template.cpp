#include <iostream>
#include <vector>

template <class T>
void printall(const std::vector<T>& v)
{
    std::cout << "Vector elements are: " << std::endl;
    for (auto p = v.begin(); p!= v.end(); ++p) {
        std::cout << *p << " " << std::endl;
    }
}

int main()
{
    std::vector<int> vec = {5, 6, 7, 8, 12, 20};
    printall(vec);

    std::vector<std::string> vecstr = {"Kamal", "Divya", "Atharv"};
    printall(vecstr);
}
