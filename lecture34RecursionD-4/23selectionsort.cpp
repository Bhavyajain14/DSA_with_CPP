#include <iostream>
#include <climits>
using namespace std;

void selectionSort(int *arr, int n, int startindex)
{

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;

    
    // base case
    if (startindex >= n - 1)
    {
        return;
    }
    int minIndex = startindex;
    for (int j = startindex + 1; j < n; j++)
    {
        if (arr[j] < arr[minIndex])
        {
            minIndex = j;
        }
    }

    swap(arr[minIndex], arr[startindex]);

    selectionSort(arr, n, startindex + 1);
}

int main()
{
    int arr[5] = {643,345,54,2,637};
    selectionSort(arr, 5, 0);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}