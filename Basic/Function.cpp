#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

void sum_arr(int arr[])
{

    double temp;
    for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]); i++)
    {
        temp = arr[i] + arr[i + 1];
    }
    cout << "这个数组的所有元素之和为：" << temp << endl;
}

int main()
{

    cout << add(1, 5) << endl;

    int arr[3] = {4, 2, 3};
    sum_arr(arr);
    cout << sizeof(arr[0]) << endl;
    cout << sizeof(arr) << endl;
    system("pause");
    return 0;
}