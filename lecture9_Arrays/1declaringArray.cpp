#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"printing the array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"printing done"<<endl;
}

int main()
{
    //declaration
    int number[15];

    //accessing a array
    cout<<"value at 14 index: "<<number[14]<<endl;

    //initializing a array
    int second[3]={5,7,12};

    //accessing a element
    cout<<"value at 2 index: "<<second[2]<<endl;

    //initializing a array
    int third[15]={2,7};
    int n=15;

    cout<<"printing the array"<<endl;
    printArray(third, 15);


    //initializing all locations with zero
    int fourth[10]={0};
    cout<<"printing the fourth array"<<endl;
    printArray(fourth, 10);

    //initializing all elements with a number
    int fifth[10];
    fill_n(fifth,10,1);
    cout<<"printing the fifth array"<<endl;
    printArray(fifth, 10);

    cout<<"size of int"<<sizeof(int);
    int fifthSize = sizeof(fifth)/4;

    char ch[5]={'a','b','c','d','e'};
    cout<<"printing the array"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<ch[i]<<endl;
    }



    cout<<endl<<"Everything is fine"<<endl<<endl;
    return 0;
}