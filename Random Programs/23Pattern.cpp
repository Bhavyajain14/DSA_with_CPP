#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while (i<=n)
    {
        int j =1;
        int count= i;
        while (j<=i)
        {
            count = i;
            cout<<count<<" ";
            count ++;
            j++;
        }
        i++;
        cout<<endl;
        
        
    }
    
return 0;
}