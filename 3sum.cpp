https://www.codingninjas.com/studio/problems/three-sum_6922132?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1
https://leetcode.com/problems/3sum/description/
1)brute approach:
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        set<vector<int>> storage;
        vector<vector<int>> ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(nums[i]+nums[j]+nums[k]==0) storage.insert({nums[i],nums[j],nums[k]});
                }
            }
        }
        for(auto it:storage)
        {
            ans.push_back(it);
        }
        return ans;
    }
};

2)better approach:
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        set<vector<int>>storage;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            set<int>temp;
            for(int j=i+1;j<n;j++)
            {
               int third=-(nums[i]+nums[j]);
               if(temp.find(third)!=temp.end())
               {
                  storage.insert({nums[i],nums[j],third});
               }
               temp.insert(nums[j]);
            }
        }
        vector<vector<int>>ans(storage.begin(),storage.end());
        return ans;
    }
};

3)optimal approach:
#include<bits/stdc++.h>
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
       if(i>0 && arr[i]==arr[i-1])continue;
       int j=i+1;
       int k=n-1;
       while(j<k)
       {
            int sum=arr[i]+arr[j]+arr[k];
            if(sum<0)
            {
                j++;
            }
            else if(sum>0)
            {
                k--;
            }
            else if(sum==0)
            {
                vector<int>temp={arr[i],arr[j],arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && arr[j]==arr[j-1])j++;
                while(j<k && arr[k]==arr[k+1])k--;
           }
       }

    }
      //to give one set to another
     return ans;
}

