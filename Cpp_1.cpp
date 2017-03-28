#include <iostream>

std::string getstr(char *x)
{
    return std::string(x);
}

int main()
{
    char _l2data[10] = "10.1.1.2";
    
    std::cout << "String: " << getstr(_l2data) << std::endl;

    return 0;
}
