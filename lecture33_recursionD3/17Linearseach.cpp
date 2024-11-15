#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    cout << "size of array is " << n << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool linearseach(int arr[], int size, int key)
{
    print(arr, size);
    // base case
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    return linearseach(arr + 1, size - 1, key);
}

int main()
{
    int arr[5] = {3, 5, 1, 2, 6};
    int size = 5;
    int key = 2;
    bool ans = linearseach(arr, size, key);
    if (ans)
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }
    return 0;
}