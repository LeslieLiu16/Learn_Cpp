#include <iostream>
 
using namespace std;
 
void QuickSort(int arr[], int low, int high){
    if (high <= low) return;

    int i = low;
    int j = high;
    int key = arr[low];
    
    while (1)
    {
        /*���������ұ�key���ֵ*/
        while (arr[i] <= key)
        {
            i++;
            if (i == high){
                break;
            }
        }
        /*���������ұ�keyС��ֵ*/
        while (arr[j] >= key)
        {
            j--;
            if (j == low){
                break;
            }
        }
        if (i >= j) break;
        /*����i,j��Ӧ��ֵ*/
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    /*����ֵ��j��Ӧֵ����*/
    arr[low] = arr[j];
    arr[j] = key;
    QuickSort(arr, low, j - 1);
    QuickSort(arr, j + 1, high);
}
 
int main()
{
    int a[] = {57, 68, 59, 52, 72, 28, 96, 33, 24};
 
    QuickSort(a, 0, sizeof(a) / sizeof(a[0]) - 1);/*����ԭ�ĵ���������Ҫ��1�����ڴ�Խ��*/
 
    for(int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
        {
        cout << a[i] << " ";
    }

    system("pause"); 
    return 0;

}