#include<iostream>
using namespace std;
int main(){
    int n;
    int i=2;
    int sum=0;
    cin>>n;
    if(n%2==0)
   {
        while (i<=n)
        {
            sum=sum+i;
            i=i+2;
        }
        cout<<sum;
        
    }
return 0;
}   