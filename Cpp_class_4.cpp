#include <iostream>

class B {
public:
    B(int num , std::string s): x(num), str(s)
        { std::cout << "B's constructor x: " << x << " str: " << s << std::endl; }
    ~B() { std::cout << "B's destructor" << std::endl; }
protected:
    int x;
    std::string str;
};

class D : public B {
public:
    D(int n, std::string st): B(n, st) { std::cout << "D's constructor" << std::endl; }
    ~D() { std::cout << "D's destructor" << std::endl; }

    void display() { std::cout << "x: " << x << " str: " << str << std::endl; }
};

int main()
{
    D d(5, "Kamal");

    d.display();
    return 0;
}
