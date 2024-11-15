#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int i, int j)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0; j<4;j++)
        {
            if (arr[i][j]==target)
            {
                return 1;
            }
        }
    }
    return 0;
}

void printSum(int arr[][4], int i, int j)
{
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0; j<4;j++)
        {
            sum+= arr[j][i];
        }
        cout<<"Sum of "<<i<<" col= "<<sum<<" "<<endl;
    }

}
int main()
{
    int arr[3][4];

    // row input
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0; j<3;j++)
        {
            cin>>arr[j][i];
        }
    }

    //output
    cout<<"printing output"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0; j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int target;
    cout<<"enter target ";
    cin>>target;
    if (isPresent (arr, target, 3,4))
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }

    printSum(arr, 3,4);

 return 0;
}