#include <iostream>
using namespace std;

extern int d;
void func();
#define PI 3.1415;
float area(int R);
void change(int* a,int* b);
const float e = 2.78;

int main()
{

    int d;
    d = 100;
    cout << d << endl;
    // func();

    cout << "area is:" << area(3) << endl;
    cout << "e is:" << e << endl;
    int a = 10;
    int b = 20;
    int* p1 = &a;
    int* p2 = &b;
    change(p1,p2);
    cout << a <<endl;
    cout << b <<endl;
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

void change(int* a, int* b){

    int t = *a;
    *a = *b;
    *b = t;
}

