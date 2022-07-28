#include "iostream"
using namespace std;

class Box
{

public:
    double length;
    double breadth;
    double height;
    double get();
    void set(double len,double bre, double hei);
};

double Box::get(){
    return length*breadth*height;
}

void Box::set(double len,double bre,double hei){
    length = len;
    breadth = bre;
    height = hei;
}


int main()
{
    Box box1;
    Box box2;
    double volume = 0;

    box1.height = 5;
    box1.length = 6;
    box1.breadth = 7;

    box2.height = 10;
    box2.length = 12;
    box2.breadth = 13;

    volume = box1.get();
    cout <<"box1的体积为:"<< volume << endl;

    cout << "box2的体积为:" <<box2.get() << endl; 

    box2.set(1,2,3);
    cout <<"box2修改后的体积为:" <<box2.get() << endl;
    system("pause");
    return 0;
}