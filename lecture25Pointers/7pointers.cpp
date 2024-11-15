#include<iostream>
using namespace std;

int main()
{
    int num= 5, i;
    int *ptr=&i;
    cout<<num<<endl;

    //address of operator--&
    cout<<"Address of num is: "<<&num<<endl;

    return 0;
}