#include <iostream>

using namespace std;

int main()
{
    int i = 100;
    int *iptr = &i;

    unique_ptr<int> ptr;

    ptr.reset(iptr);

    if (iptr == nullptr) {
        cout << "iptr is nullptr" << endl;
    }

    cout << iptr << endl;
    cout << *iptr << endl;
}
