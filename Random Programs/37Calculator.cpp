#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    char op;
    cout << "enter the operation you want to perform";
    cin >> op;
    // cout<<"1. Addition";
    // cout<<"2. subtraction";
    // cout<<"3. multiplication";
    // cout<<"4. division";
    // cout<<"5. modulous";
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;
    default:
        cout << "enter valid operation";
        break;
    }
    return 0;
}