#include <iostream>
using namespace std;
int main()
{
    int amount;
    cin >> amount;
    int Rs100, Rs50, Rs10, Rs1;
    switch (1)
    {
    case 1:
        Rs100 = amount / 100;
        amount = amount % 100;
        cout << "No of 100 Rupee Notes=" << Rs100 << endl;
        // break;
    case 2:
        Rs50 = amount / 50;
        amount = amount % 50;

        cout << "No of 50 Rupee Notes=" << Rs50 << endl;
        // break;
    case 3:
        Rs10 = amount / 10;
        amount = amount % 10;

        cout << "No of 10 Rupee Notes=" << Rs10 << endl;
        // break;
    case 4:
        Rs1 = amount / 1;
        amount = amount % 1;

        cout << "No of 1 Rupee Notes=" << Rs1 << endl;
        // break;

    default:
        break;
    }
    return 0;
}