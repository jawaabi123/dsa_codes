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

code2(map logic):

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
      
      vector<vector<int>>ans;
      unordered_map<int,int>mpp;
      int n=arr.size();
      for(int i=0;i<n;i++)
      {
         int count=mpp[s-arr[i]];
         vector<int>pair;
         pair.push_back(min(arr[i],s-arr[i]));
         pair.push_back(max(arr[i],s-arr[i]));
         while(count--)
         {
            ans.push_back(pair);
         }
         mpp[arr[i]]++;
      }
      sort(ans.begin(),ans.end());
      return ans;                            
}
