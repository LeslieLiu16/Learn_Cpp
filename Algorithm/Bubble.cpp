#include <iostream>
using namespace std;

int main()
{
    //创建一个数组
    int arr [] = {8, 9, 4, 1, 3, 2, 0, 7, 6, 5};
    //计算数组的长度
    int length = sizeof(arr) / sizeof(arr[0]);
    //使用for循环
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            //如果前一个位置上的元素比后一个位置上的元素大，则交换位置
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1]=temp;
            }
        }
    }
    //打印结果
    cout<<"排序后的结果为："<<endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    
    system("pause");
    return 0;
}