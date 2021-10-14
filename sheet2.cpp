#include<iostream>
using namespace std;
 
int main() {
       int n;
       cout<<"Enter the size of array--> ";
       cin>>n;

       int arr[n];

       for(int i=0; i<n; i++)
       {
           cin>>arr[i];
       }

       // min max logic
       int max=arr[0];
       int min=arr[0];

       for(int i=0; i<n; i++)
       {
           if(arr[i]<min)
           {
               min=arr[i];
           }
           if(arr[i]>max)
           {
               max=arr[i];
           }
           
       }

       cout<<"Min value--> "<<min<<endl;
       cout<<"Max value--> "<<max<<endl;
       
     return 0;
}