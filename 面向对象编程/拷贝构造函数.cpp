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

    cout << "构造函数" << endl;
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line &obj)
{

    cout << "拷贝构造函数" << endl;
    ptr = new int;
    *ptr = *obj.ptr;
}

Line::~Line()
{
    cout << "释放内存" << endl;
    delete ptr;
}
int Line::getLength()
{
    return *ptr;
}

void display(Line obj)
{
    cout << "line 的长度为 : " << obj.getLength() << endl;
}

int main()
{
    Line line(10);
    display(line);
    return 0;
}