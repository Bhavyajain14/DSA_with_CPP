#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    int sum=0;
    cin>>n;
    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<sum;
    
return 0;
}