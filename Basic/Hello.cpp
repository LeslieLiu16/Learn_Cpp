#include <iostream>
#include <stdlib.h>
using namespace std;

int add(int a, int b)
{

    return a + b;
}

void exchange(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

bool is_equal(int a, int b)
{
    return a == b ? true : false;
}

void all_multiply()
{
    int a;
    cout << "请输入数字："
         << " ";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if (0 == a % i && i <= a / i)
        {
            cout << i << "*";
            cout << a / i << "=";
            cout << a << endl;
        }
    }
}



int main()
{
    int a, b;
    a = 168;
    b = 20;

    cout << "交换前的a和b:" << a << " ";
    cout << b << endl;

    exchange(a, b);

    cout << "交换后的a和b:" << a << " ";
    cout << b << endl;

    cout << is_equal(a, b) << endl;

    all_multiply();

    system("pause");
    return 0;
}