#include<iostream>
using namespace std;
 
int main() {
       int n;
       cin>>n;
       int arr[n];
       for(int i=0; i<n; i++)
       {
           cin>>arr[i];
       }
       cout<<endl;

       int maxsum = 0 ;  //if the value was negative Initialize maxSum with INT_MIN.
       int cursum = 0;
       for(int i=0; i<n;i++)
       {
           cursum = cursum + arr[i];
           if(cursum>maxsum)
           {
               maxsum = cursum;
           }
           if(cursum<0)
           {
               cursum=0;
           }
       } 
       cout<<maxsum<<endl;

     return 0;
}