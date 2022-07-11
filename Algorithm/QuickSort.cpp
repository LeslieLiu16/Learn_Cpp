#include <iostream>
 
using namespace std;
 
void QuickSort(int arr[], int low, int high){
    if (high <= low) return;

    int i = low;
    int j = high;
    int key = arr[low];
    
    while (1)
    {
        /*从左向右找比key大的值*/
        while (arr[i] <= key)
        {
            i++;
            if (i == high){
                break;
            }
        }
        /*从右向左找比key小的值*/
        while (arr[j] >= key)
        {
            j--;
            if (j == low){
                break;
            }
        }
        if (i >= j) break;
        /*交换i,j对应的值*/
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    /*中枢值与j对应值交换*/
    arr[low] = arr[j];
    arr[j] = key;
    QuickSort(arr, low, j - 1);
    QuickSort(arr, j + 1, high);
}
 
int main()
{
    int a[] = {57, 68, 59, 52, 72, 28, 96, 33, 24};
 
    QuickSort(a, 0, sizeof(a) / sizeof(a[0]) - 1);/*这里原文第三个参数要减1否则内存越界*/
 
    for(int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
        {
        cout << a[i] << " ";
    }

    system("pause"); 
    return 0;

}