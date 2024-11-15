#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapAlternate(int arr[], int size){
    for (int i = 0; i < size; i+=2)
    {
        if (i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
    int arr1[5]={2,6,2,67,9};
    int arr2[6]={7,3,56,678,3,5};

    swapAlternate(arr1,5);
    printArray(arr1, 5);

    cout<<endl;

    swapAlternate(arr2,6);
    printArray(arr2, 6);
    return 0;
}