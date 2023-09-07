https://leetcode.com/problems/subsets/description/

bit manipulation:

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        int n=nums.size();
        for(int i=0;i<(1<<n);i++)
        {
            vector<int>temp;
            for(int k=0;k<n;k++)
            {
                if(i & 1<<k)
                {
                    temp.push_back(nums[k]);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

recursion:

class Solution 
{
public:
    void rec(int i,vector<int>nums,vector<vector<int>>&ans,vector<int>temp,int n)
    {
        if(i>=n) 
        {
             ans.push_back(temp);
             return;
        }
           
        rec(i+1,nums,ans,temp,n);

        temp.push_back(nums[i]);
        rec(i+1,nums,ans,temp,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        vector<int>temp;
        int n=nums.size();
        rec(0,nums,ans,temp,n);
        return ans;
    }
};
