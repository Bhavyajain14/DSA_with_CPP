#include<iostream>
using namespace std;
int AP(int n)
{
    int nth= (3*n+7);
    return nth;
}
int main(){
    int n;
    cin>>n;
    int ans=AP(n);
    cout<<ans;
return 0;
}