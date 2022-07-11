#include "iostream"
using namespace std;

int main(){

    int i = 0;
    cout << sizeof(i) << endl;
    short a = 1;
    cout << sizeof(a) << endl;
    long b = 1000;
    cout << sizeof(b) << endl;
    char c = 'a';
    cout << sizeof(c) << endl;
    string s = "hello world";
    cout << sizeof(s) << endl;
    float f = 1000;
    cout << sizeof(f) << endl;
    double d = 1000;
    cout << sizeof(d) << endl;
    system("pause");
    return 0;

}