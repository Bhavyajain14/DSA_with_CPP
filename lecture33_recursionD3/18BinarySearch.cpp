#include<iostream>
using namespace std;

bool binarysearch(int arr[], int start, int end, int key){
    //base case
    //element not found
    if(start>end){
        return -1;
    }

    int mid = start+(end-start)/2;

    //element found
    if(arr[mid]==key){
        return true;
    }


    if(arr[mid]<key){
        return binarysearch(arr, mid+1, end, key);
    }
    if(arr[mid]>mid){
        return binarysearch(arr, start, mid-1, key);
    }
}

int main()
{
    int arr[6] = {2, 4, 6, 10, 14, 18};
    int size = 6;
    int key = 180;
    int ans = binarysearch(arr, 0, 5, key);
    cout<<"Present or not "<<ans<<endl;
    return 0;
}