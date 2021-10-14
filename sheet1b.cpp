#include <bits/stdc++.h>
using namespace std;
void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
void reverseArray(int arr[], int start, int end, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (start <= end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
}
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    displayArray(arr, size);
    reverseArray(arr, 0, size - 1, size);
    displayArray(arr,size);

    return 0;
}
