#include "iostream"

using namespace std;

class Box
{
    double width;

public:
    double length;
    friend void printWidth(Box box);
    void setWidth(double wid);
};

void Box::setWidth(double wid){

    width = wid;
}

void printWidth(Box box){
    cout << "width: " << box.width << endl;
}

int main()
{
    Box box;
    box.setWidth(20.0);
    printWidth(box);
    return 0;
}