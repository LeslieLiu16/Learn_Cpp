# include "iostream"
using namespace std;

class Line{
    public:
        void setLength(double len);
        double getLength();
        Line(double len);
        ~Line();
    private:
        double length;
};

Line::Line(double len){
    length = len;
    cout << "对象正在创建···" << endl;
}

Line::~Line(){
    cout << "对象被删除···" << endl;
}

void Line::setLength(double len){

    length = len;
}

double Line::getLength(){
    
    return length;
}

int main(){

    Line line(10.0);
    cout << "长度为:" << line.getLength() <<endl;
    line.setLength(6.0);
    cout << "更改后的长度为:" << line.getLength() << endl;
    // system("pause");
    return 0;
}