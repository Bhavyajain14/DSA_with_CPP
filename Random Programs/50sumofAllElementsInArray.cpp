#include<iostream>
using namespace std;
int sumarray (int array[], int arraysize)
{
    int sum=0;
    for(int i=0;i<arraysize;i++)
    {
        sum=sum+array[i];
        
    }
    return sum;

}
int main(){
    int array[]={7,4,5,7,9,2};
    int arraysize=6;
    cout<<"Sum= "<<sumarray(array,arraysize);
    
return 0;
}