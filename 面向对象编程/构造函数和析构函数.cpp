#include "iostream"
using namespace std;

class Line
{
public:
    void setLength(double len);
    double getLength();
    Line(double len);
    ~Line();

private:
    double length;
};

Line::Line(double len)
{
    length = len;
    cout << "Line is created" << endl;
}

Line::~Line()
{
    cout << "Line is deleted" << endl;
}

void Line::setLength(double len)
{

    length = len;
}

double Line::getLength()
{

    return length;
}

int main()
{

    Line line(10.0);
    cout << "length is:" << line.getLength() << endl;
    line.setLength(6.0);
    cout << "length is:" << line.getLength() << endl;
    // system("pause");
    return 0;
}