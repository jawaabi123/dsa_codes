
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void  bsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<n-i-1;k++)
        {
            if(arr[k]>arr[k+1])
            {
                swap(arr[k],arr[k+1]);
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter element:";
        cin>>arr[i];
    }
    bsort(arr,n);
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}