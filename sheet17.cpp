#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++)
   {
       cin>>a[i];
   }
   cout<<endl;
   int maxProfit = 0;
   int minSoFar = a[0];
   for(int i=0; i<n; i++)
   {
       minSoFar = min(minSoFar,a[i]);
       int profit = a[i]-minSoFar;
       maxProfit = max(maxProfit,profit);
   }
   cout<<maxProfit<<endl;
  return 0;
}
