#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    cout << '\t' << showpos << 4 << endl;
    cout << setw(15) << internal << fixed << setprecision(2) << -67.09124 << endl;
    cout << right << setw(10) <<  235 << endl;
    cout << hex << 0x8A1 << dec << endl;
    cout << -121.0 << endl;
    cout << 1;
    cout << 24;

    cout << noshowpos;
    cout << endl << endl << endl;


    cout << "String1\n\tString2\n \t\tString3" << endl;
    cout << "\tString1\nString2" << endl;
    cout << 3;
    cout << '*';
    cout << "\tString\n1";
    return 0;
}
