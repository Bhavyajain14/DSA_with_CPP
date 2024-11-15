//an integer such that the sum of the cubes of its digits is equal to the number itself. 
//For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371. 
#include<iostream>
#include<math.h>
using namespace std;
int main() 
{

    int n;
    cin>>n;
    int sum=0;
    int originaln=n;
    while(n>0)
    {
        int lastdigit= n%10;
        sum= sum+( lastdigit*lastdigit*lastdigit);
        n=n/10;
    }
    if(sum==originaln)
    {
        cout<<"Armstrong number"<<endl;
    }
    else
    {
        cout<<"not armstrong"<<endl;
    }

    return 0;
}