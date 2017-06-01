#include <iostream>
#include <boost>

using namespace std;

int main()
{
    char l2data[6];
    l2data[0] = '\0';
    l2data[1] = '\x01';
    l2data[1] = '\x02';
    l2data[1] = '\x03';
    l2data[1] = '\x04';
    l2data[1] = '\x05';

    string str(l2data, 6);

    cout << "Char string: " << l2data[0] << ":" << l2data[1] << ":" << l2data[2]
         << ":" << l2data[3] << ":" << l2data[4] << ":" << l2data[5] << endl;
    cout << "Pring string: " << str << endl;
    cout << "Print string boost: " << boost::lexical_cast<string>(l2data)
         << endl;
    return 0;
}
