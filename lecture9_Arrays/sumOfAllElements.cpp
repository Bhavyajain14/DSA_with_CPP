#include<iostream>
using namespace std;

int arrSum(int arr[], int n){
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        sum = sum+arr[i];
    }

    return sum;
    
}

int main()
{
    int arr[100], n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Sum of elements of array "<<arrSum(arr,n);
    
    return 0;
}