#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array--> ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    int k;
    cout << "Enter the value of k-->";
    cin >> k;

    for (int j = 1; j <= k; j++)
    {
        int last = arr[n - 1];
        for (int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = last;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}