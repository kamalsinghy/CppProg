#include <iostream>

int main()
{
    using namespace std; //using directive: makes all the name in the namespace as they behave in global space

    cout << "hello cruel world" << endl;
    int cout;
    cout = 10;
    std::cout << "cout - " << cout << endl;
    std::cout << "cout << 5 - " << (cout << 5) << endl;

    return 0;
}

// "using declaration as they behave in the local scope"
// Replace "using namespace std" with below", and then see the behavior
// using std::cout;
// using std::endl;

//
// locals are safer than global which will avoid any name collision
// local declarations are safest, then global
// never put directive in header file.
//
