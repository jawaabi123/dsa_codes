https://www.codingninjas.com/studio/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&leftPanelTab=0

code:

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
      sort(arr.begin(),arr.end());
      vector<vector<int>>ans;
      int n=arr.size();
      for(int i=0;i<n;i++)
      {
         for(int j=i+1;j<n;j++)
         {
            if(arr[i]+arr[j]==s)
            {
               vector<int>a;
               a.push_back(arr[i]);
               a.push_back(arr[j]);
               ans.push_back(a);
            }
         }
      }
      return ans;                            
}
