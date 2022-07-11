#include <iostream>
using namespace std;

class Hero
{

public:
    int HP;
    int MP;
    int attack;
    int defence;

    Hero(int HP, int MP, int attack, int defence);
    void gongji(int attack);
};

Hero::Hero(int Hero_HP, int Hero_MP, int Hero_attack, int Hero_defence)
{
    cout << "class is being created" << endl;
    HP = Hero_HP;
    MP = Hero_MP;
    attack = Hero_attack;
    defence = Hero_defence;
}

void Hero::gongji(int attack)
{

    cout << "Ôì³ÉÁË" << attack << "ÉËº¦" << endl;
}

int main()
{


    Hero zed(300, 200, 100, 50);
    cout << zed.HP << endl;
    cout << zed.MP << endl;
    cout << zed.attack << endl;
    cout << zed.defence << endl;
    zed.gongji(zed.attack);


    system("pause");
    return 0;
}