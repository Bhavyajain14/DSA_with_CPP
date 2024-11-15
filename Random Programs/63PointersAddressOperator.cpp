/*#include<iostream>
using namespace std;
int main(){
    int num;
    num=5;
    cout<<"Num="<<num<<endl;

    //Address of operator--&
    cout<<"Address of Num is:"<<&num<<endl; 

    //creating pointer
    int *p= &num;
    cout<<*p<<endl;
    cout<<p<<endl;

    cout<<"size of integer is " <<sizeof(num)<<endl;
    cout<<"size of pointer is " <<sizeof(p)<<endl;

return 0;
}*/
#include<iostream>
using namespace std;

int main () {

    int num  = 5 ;

    cout << num << endl;

    // address of Operator - &

    cout <<" address of num is " << &num << endl;

    int *ptr = &num;

    cout << "Address is : " << ptr << endl;
    cout << "value is : " << *ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "Address is : " << p2 << endl;
    cout << "value is : " << *p2 << endl;

    cout << " size of integer is " << sizeof(num) << endl;
    cout << " size of double is " << sizeof(d) << endl;
    cout << " size of pointer is " << sizeof(ptr) << endl;
    cout << " size of pointer is " << sizeof(p2) << endl;



    return 0;
}