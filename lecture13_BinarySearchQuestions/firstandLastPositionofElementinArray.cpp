#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){

    int start =0;
    int end = n-1;
    int ans = -1;
    int mid= start + (end-start)/2;

    while(start<=end){


        if(key==arr[mid]){
            ans = mid;
            end = mid -1;
        }
        else if(arr[mid]>key){
            end = mid -1;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }

        mid = start + (end-start)/2;

    }

    return ans;

}
int lastOcc(int arr[], int n, int key){

    int start =0;
    int end = n-1;
    int ans = -1;
    int mid= start + (end-start)/2;

    while(start<=end){


        if(key==arr[mid]){
            ans = mid;
            start = mid +1;
        }
        else if(arr[mid]>key){
            end = mid -1;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }

        mid = start + (end-start)/2;

    }

    return ans;

}

int main()
{
    int arr[6]={2,5,3,3,3,8};
    
    cout<<"First Occurance of 3 is at index "<<firstOcc(arr, 6, 3)<<endl;
    cout<<"Last Occurance of 3 is at index "<<lastOcc(arr, 6, 3)<<endl;
    return 0;
}