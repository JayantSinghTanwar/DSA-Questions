#include <bits/stdc++.h>
using namespace std;

void arrange(int arr[], int n)
{
    int negi = 0;
    int posi = n - 1;

    while (negi <= posi)
    {
        if (arr[negi] < 0 && arr[posi] < 0)
        {
            negi++;
        }
        else if (arr[negi] > 0 && arr[posi] < 0)
        {
            swap(arr[negi], arr[posi]);
            negi++;
            posi--;
        }
        else if (arr[negi] > 0 && arr[posi] > 0)
        {
            posi--;
        }
        else
        {
            negi++;
            posi--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arrange(arr, n);
    return 0;
}
