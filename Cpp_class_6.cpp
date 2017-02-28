#include <iostream>
#include <map>
#include <utility>
#include <functional>
#include <string>

class B {
public:
    B() {std::cout << "B's constructor" << std::endl;}
    ~B() {std::cout << "B's destructor" << std::endl;}

    virtual void display1() {}; // { std::cout << "B's Display" << std::endl; }
    
    void display2() { std::cout << "B's display2" << std::endl; }

    void initialize() {
        mapapi.insert(std::pair<std::string, callback>("display", &B::display1));
        mapapi.insert(std::pair<std::string, callback>("display2", &B::display2));
    }

protected:
    typedef std::function<void(B&)> callback;
    std::map<std::string, callback> mapapi;
};

class D : public B {
public:
    D() { std::cout << "D's constructor" << std::endl; }
    ~D() { std::cout << "D's destructor" << std::endl; }

    void display1() override { std::cout << "D's display" << std::endl; }

    void process() {
        std::string str;

        str = static_cast<std::string>("display");
        std::cout << "str: " << str << std::endl;
        mapapi[str](*this);

        str = static_cast<std::string>("display2");
        std::cout << "str: " << str << std::endl;
        mapapi[str](*this);
    }
};

int main()
{
    D d;
    d.initialize();

    d.process();

    return 0;
}
