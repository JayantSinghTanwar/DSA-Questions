#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr1[n];
    int arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }
    cout << endl;

    int i = n - 1;
    int j = 0;

    while (i >= 0 && j < m)
    {
        if (arr1[i] > arr2[j])
        {
            int temp = arr1[i];
            arr1[i] = arr2[j];
            arr2[j] = temp;
            i--;
            j++;
        }
        else
        {
            j++;
        }
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    for (int j = 0; j < m; j++)
    {
        cout << arr2[j] << " ";
    }

    return 0;
}
