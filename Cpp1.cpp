#include <iostream>
#include <type_traits>

#if 0
enum e1 {};
enum class e2: int {};

int main()
{
    bool e1_type = std::is_same<unsigned, typename std::underlying_type<e1>::type>::value;
    bool e2_type = std::is_same<int, typename std::underlying_type<e2>::type>::value;

    std::cout << "underlying type of e1 is " << (e1_type ? "unsigned" : "non-unsigned") << std::endl;
    std::cout << "underlying type of e2 is " << (e2_type ? "int" : "non-init") << std::endl;
}
#endif

int main ()
{
    unsigned int i;
    void *j;

    std::cout << "Size of unsigned int: " << sizeof(i) << std::endl;
    std::cout << "Size of pointer: " << sizeof(j) << std::endl;

    return 0;
}
