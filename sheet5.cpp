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

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        //  if (arr[i] > 0) = for putting all negative elements in right.
        if (arr[i] < 0) // for putting all negative elements in left.
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}