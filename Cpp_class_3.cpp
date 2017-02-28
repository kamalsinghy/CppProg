#include <iostream>
#include <map>
#include <utility>
#include <functional>
#include <string>

using namespace std;

class B {
public:
    B() {cout << "B's constructor" << endl;}
    ~B() {cout << "B's destructor" << endl;}

    virtual void display1() { cout << "B's Display" << endl; }

protected:
    typedef function<void()> callback;
    static map<string, callback> mapapi;
};

class D : public B {
public:
    D() { cout << "D's constructor" << endl; }
    ~D() { cout << "D's destructor" << endl; }

    void display1() override { cout << "D's display" << endl; }

    void initialize() {
        mapapi.insert(pair<string, callback>("display", D::display1))
    }
};

int main()
{
    D d;
    d.initialize();

    return 0;
}
