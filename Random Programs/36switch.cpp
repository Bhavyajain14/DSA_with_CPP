#include<iostream>
using namespace std;
int main(){
    //int num=2;
    char ch = '1';
    switch (ch)
    {
    case 1:
        cout<<"First";
        break;
    case '1':
        cout<<"Second";
        break;    
    
    default:
        cout<<"it is default case";
        break;
    }
return 0;
}