#include <iostream>
using namespace std;

extern int d;
void func();
#define PI 3.1415;
float area(int R);

const float e = 2.78;

int main()
{

    int d;
    d = 100;
    cout << d << endl;
    // func();

    cout << "area is:" << area(3) << endl;
    cout << "e is:" << e << endl;
    system("pause");
    return 0;
}

void func()
{
    cout << "2333" << endl;
}

float area(int R)
{

    float res = R * R * PI;
    return res;
}