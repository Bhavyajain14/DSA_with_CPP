#include<iostream>
using namespace std;
int fib(int n)
{
    int a=0;
    int b=1;
    cout<<a<<endl<<b<<endl;
    for(int i=1;i<=n;i++)
    {
        int nextNum = a+b;
        cout<<nextNum<<endl;
        a=b;
        b=nextNum;
    }
    return b ;

}
int main(){
    int n;
    cin>>n;
    
    cout<<fib(n)<<endl;
    
    //cout<<fibonacci<<endl;
return 0;
}