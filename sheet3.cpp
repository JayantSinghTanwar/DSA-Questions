  #include <iostream>
//#include <algorithm>
using namespace std;

int main()
{
    int n, k;

    cout << "Enter the size of array--> ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {  
        cin >> arr[i];
    }

    cout << "Enter the value of K--> ";
    cin >> k;
    cout << endl;

    // sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }     

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "The " << k << " min element is--> " << arr[k - 1] << endl;
    cout << "The " << k << " max element is--> " << arr[n - k] << endl;

    return 0;
}