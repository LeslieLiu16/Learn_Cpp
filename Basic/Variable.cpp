#include <iostream>
using namespace std;

extern int d;
void func();



int main(){
    
    int d;
    d = 100;
    cout << d << endl;
    func();
    system("pause");
    return 0;
}

void func(){
    cout << "2333" << endl;
}