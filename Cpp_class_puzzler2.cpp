#include <iostream>

class B {
public: virtual void f() { cout << "B: F()" << endl; }
        virtual void f(int) { cout << "B::f(int)" << endl; }
};

class D : public B {
public:
    void f(int) { cout << "D: f(int) " <<endl; }
};

class F : public D {
public:
    void f() { cout << "F: f()" << endl; }
};

int main()
{
A b; //static type
D d; //static type
F f1; //static type
b.f(); //legal
d.f(); //error
f1.f(); //legal

D&dr = f1;
dr.f(); //illegal

B &br = f1;
br.f(); //legal

return 0;
}
