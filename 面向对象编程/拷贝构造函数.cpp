#include <iostream>

using namespace std;

class Line
{
public:
    int getLength(void);
    Line(int len);
    Line(const Line &obj);
    ~Line();

private:
    int *ptr;
};

Line::Line(int len)
{

    cout << "���캯��" << endl;
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line &obj)
{

    cout << "�������캯��" << endl;
    ptr = new int;
    *ptr = *obj.ptr;
}

Line::~Line()
{
    cout << "�ͷ��ڴ�" << endl;
    delete ptr;
}
int Line::getLength()
{
    return *ptr;
}

void display(Line obj)
{
    cout << "line �ĳ���Ϊ : " << obj.getLength() << endl;
}

int main()
{
    Line line(10);
    display(line);
    return 0;
}