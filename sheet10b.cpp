#include <bits/stdc++.h>
using namespace std;

int main()
{
    //code
    // int t;
    // cin>>t;
    // while(t--){
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    if (n <= 1)
        cout << 1 << "\n";
    else if (ar[0] == 0)
        cout << -1 << "\n";
    else
    {
        int flag = 0;
        int mx = ar[0];
        int step = ar[0];
        int jump = 1;
        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
            {
                flag = 1;
                break;
            }
            mx= max(mx,i+ar[i]);
            // if (mx > i + ar[i])
            // {
            //     mx = mx;
            // }
            // else
            // {
            //     mx = i + ar[i];
            // }
            step--;
            if (step == 0)
            {
                jump++;
                if (i >= mx)
                    break;
                step = mx - i;
            }
        }
        if (flag == 1)
            cout << jump << "\n";
        else
            cout << -1 << "\n";
    }
    // }

    return 0;
}