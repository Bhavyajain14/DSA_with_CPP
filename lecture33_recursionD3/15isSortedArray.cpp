#include<iostream>
using namespace std;

bool issorted(int arr[], int size){
    if(size==0||size==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ramainingPart = issorted(arr+1, size -1);
        return ramainingPart;
    }
}

int main()
{
    int arr[5]={2,4,16,8,9};
    int size=5;
    bool ans= issorted(arr,5);
    if(ans){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
}