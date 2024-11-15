#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>='a'&& ch<='z')
    {
        cout<<ch<<endl<<"lowercase";
    }
    else if(ch>='A'&& ch <='Z')
    {
        cout<<ch<<endl<<"Uppercase";
    }
    else
    {
        cout<<"numeric";
    }
return 0;
}