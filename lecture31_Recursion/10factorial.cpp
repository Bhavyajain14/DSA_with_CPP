#include<iostream>
using namespace std;

int factorial(int n){

    //base case
    if(n==0)
    return 1;
    // cout<<n<<endl;
    int SmallerProblem = factorial(n-1);
    int biggerProblem = n*SmallerProblem;

    return biggerProblem;
}

int main()
{
    int n;
    cin>>n;

    int ans = factorial(n);
    cout<<ans<<endl;
    return 0;
}