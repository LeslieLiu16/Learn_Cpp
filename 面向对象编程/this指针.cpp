#include "iostream"

using namespace std;

class Box
{

public:
    Box(double l = 2, double b = 2, double h = 2)
    {
        length = l;
        breadth = b;
        height = h;
    }
    double volume()
    {
        return length * height * breadth;
    }
    int compare(Box box)
    {
        return this->volume() > box.volume();
    }

private:
    double length;
    double breadth;
    double height;
};

int main()
{
    Box Box1(3.3, 1.2, 1.5); // Declare box1
    Box Box2(8.5, 6.0, 2.0); // Declare box2

    if (Box1.compare(Box2))
    {
        cout << "Box2 is smaller than Box1" << endl;
    }
    else
    {
        cout << "Box2 is equal to or larger than Box1" << endl;
    }
    return 0;
}