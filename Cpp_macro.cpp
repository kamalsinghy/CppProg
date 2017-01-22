#include <iostream>

int main()
{
    std::cout << "Macro defined: 0x" << std::hex << __cplusplus << std::endl;
    return 0;
}
