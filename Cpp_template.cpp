#include <iostream>

using namespace std;

template<class T>
class NhBasic {
public:
    NhBasic() { cout << "constructor" << endl;}
    ~NhBasic() { cout << "descrutor" << endl;}

    int install() { return 2; }
    int uninstall() { return 3; }
    int change() { return 4; }

    static int create() { return 1; }

    int getToken() { return _token; }

protected:
    int _token;
};

class NhLocalEntry;

int main()
{
    class NhBasic<NhLocalEntry> nhLocalEntry;

    NhBasic<NhLocalEntry>::create();

    nhLocalEntry.getToken();

    return 0;
}
