#include<iostream>
using namespace std;

void bubbleSort(int *arr, int n)
{   
    for(int i=0; i<n-1; i++){
        
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);            
            }
        }
    }
}


int main()
{
    int arr[9]={6,23,214,86,53,3246,215,453,785};
    bubbleSort(arr, 9);

    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
/*
selection
insertion*/