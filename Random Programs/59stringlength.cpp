#include<iostream>
#include<string.h>
using namespace std;
/*int stringlength (char string[])
{
    int count=0;
    for(int i=0; string[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
*/
int main(){
    char name[20];
    cin>>name;
    cout<<name<<endl;
    //strlen(name);
    cout<<"length of string: "<<strlen(name)<<endl;
    cout<<"Reversed string "<<strrev(name)<<endl;
    
   // cout<<"length of string: "<<stringlength(name)<<endl;

return 0;
}