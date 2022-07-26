#include <iostream>
using namespace std;

typedef int my_int;

int main()
{

    enum color
    {
        red,
        green,
        blue = 10,
        yellow
    } c;
    
    c = blue;
    cout << c << endl;
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

    cout << "Size of my_int : " << sizeof(my_int) << endl;
    system("pause");
    return 0;
}