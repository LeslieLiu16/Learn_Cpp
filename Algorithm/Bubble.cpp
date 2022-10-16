#include <iostream>
// #include <malloc.h>
using namespace std;

void bubble(double *arr);


int main()
{

    double arr [] = {8, 9, 4, 1, 3, 2, 0, 7, 6, 5};
    bubble(arr);
    system("pause");
    return 0;
}

void bubble(double *arr){
    int length = sizeof(*arr)/sizeof(double);
    // int length = sizeof(*arr)/sizeof(arr[0]);
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1]=temp;
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}