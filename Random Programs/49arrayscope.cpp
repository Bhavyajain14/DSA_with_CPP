#include<iostream>
using namespace std;
void update(int arr[], int n)
{
    cout<<"Inside the function"<<endl;
    arr[0]=120;
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    cout<<"Goind back to main function"<<endl;
}
int main(){
    int arr[30]={1,2,3};
    update(arr,3);
    cout<<"Printing in main function"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
return 0;
}