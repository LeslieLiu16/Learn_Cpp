#include <iostream>
using namespace std;

int main()
{

    unsigned int a = 12;
    unsigned int b = 5;
    int c = 0;
    c = a & b;
    cout <<"a��b���룺" <<c << endl;
    c = a | b;
    cout <<"a��b�Ļ�" << c << endl;
    c = ~a;
    cout <<"a�ķǣ�" << c << endl;
    c = a ^ b;
    cout <<"a��b�����" << c << endl;
    c = a << 2;
    cout <<"a������λ��" << c << endl;
    c = a >> 2;
    cout <<"a������λ��" << c << endl;
    system("pause");
    return 0;
}