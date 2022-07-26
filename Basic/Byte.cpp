#include <iostream>
using namespace std;

int main()
{

    unsigned int a = 12;
    unsigned int b = 5;
    int c = 0;
    c = a & b;
    cout <<"a和b的与：" <<c << endl;
    c = a | b;
    cout <<"a和b的或：" << c << endl;
    c = ~a;
    cout <<"a的非：" << c << endl;
    c = a ^ b;
    cout <<"a和b的异或：" << c << endl;
    c = a << 2;
    cout <<"a右移两位：" << c << endl;
    c = a >> 2;
    cout <<"a左移两位：" << c << endl;
    system("pause");
    return 0;
}