#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1, count=1;
    cin>>n;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<count<<" ";
            count ++;
            j++;
        }
        i++;
        cout<<endl;
        
    }
    
return 0;
}