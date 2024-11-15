#include<iostream>
using namespace std;

int arrSum (int arr[], int size){
    int sum = 0;
    if(size == 0){
        return 0;
    } 

    if(size == 1)
        return arr[0];

    sum= sum + arr[0];

    return sum + arrSum(arr+1, size-1);
}

int main()
{
    int arr[5] = {3,2,5,1,6};
    int size = 5; 
    int ans = arrSum(arr,5);
    cout<<ans<<endl;
    return 0;
}