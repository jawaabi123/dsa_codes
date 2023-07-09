#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void ssort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int temp;
        int min=i;
        for(int k=i;k<n;k++)
        {
           if(arr[k]<arr[min])
           {
               min=k;
           }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
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
    ssort(arr,n);
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}