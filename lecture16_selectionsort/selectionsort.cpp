#include<iostream>
using namespace std;

void selectionSort(int *arr, int n)
{   
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;

        for (int j = i + 1; j < n; j++) 
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    int arr[5] = {2, 5, 1, 6, 9};
    selectionSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
