#include <iostream>
using namespace std;

// int sum_array(int array[])
// {
//     int temp;
//     for (int i = 0; i <= sizeof(array) / sizeof(array[0]); i++)
//     {

//         int temp = array[i] + array[i + 1];
//         int sum = temp + array[i + 1];
//         temp = sum;
//     }
//     return temp;
// }

int myMax(int a, int b, int c)
{
    if(a==b||a==c||b==c)
    {
        cout<<"有相同的两个数字"<<endl;
        return -1;
    }

    int temp, max;
    if (a > b)
    {
        temp = a;
        if (a > c)
        {
            max = a;
        }
        else
        {
            max = c;
        }
    }
    else if (a < b)
    {
        temp = b;
        if (b > c)
        {
            max = b;
        }
        else
        {
            max = c;
        }
    }
    return max;
}

int main()
{
    cout <<"最大的数字是：" <<
    myMax(3, 3, 1) << endl;

    system("pause");
    return 0;
}