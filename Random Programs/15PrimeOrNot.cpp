#include<iostream>
using namespace std;
int main(){
    int n, i=2;
    cin>>n;
    while (i<n)
    {
    if (n%i==0)
    {
        cout<<"not prime - "<<i<<endl;
    }
    else
    {
        cout<<"Prime - "<<i<<endl;
    }
    i++;
    }
    
return 0;
}