#include <iostream>
using namespace std;

int main()
{
    //����һ������
    int arr [] = {8, 9, 4, 1, 3, 2, 0, 7, 6, 5};
    //��������ĳ���
    int length = sizeof(arr) / sizeof(arr[0]);
    //ʹ��forѭ��
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            //���ǰһ��λ���ϵ�Ԫ�رȺ�һ��λ���ϵ�Ԫ�ش��򽻻�λ��
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1]=temp;
            }
        }
    }
    //��ӡ���
    cout<<"�����Ľ��Ϊ��"<<endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    
    system("pause");
    return 0;
}