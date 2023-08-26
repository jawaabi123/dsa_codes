
https://www.codingninjas.com/studio/problems/next-greater-element_670312?leftPanelTab=0

code:

#include<stack>
vector<int> nextGreaterElement(vector<int>& arr, int n)
{
	vector<int>ans(n);
	stack<int>inter;
	for(int i=n-1;i>=0;i--)
	{
		while(!inter.empty() && arr[i]>=inter.top())
		{
			inter.pop();
		}
		if(inter.empty())
		{
			ans[i]=-1;
		}
		else
		{
			ans[i]=inter.top();
		}
		inter.push(arr[i]);
	}
	
	return ans;
}

https://leetcode.com/problems/next-greater-element-i/submissions/

code:
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        int s1=nums1.size();
        int s2=nums2.size();
        stack<int>inter;
        vector<int>ans(s1,-1);
        unordered_map<int,int>mpp;
        for(int i=s2-1;i>=0;i--)
        {
            while(!inter.empty() && nums2[i]>=inter.top())
            {
                inter.pop();
            }
            if(inter.empty())
            {
                mpp[nums2[i]]=-1;
            }
            else
            {
                mpp[nums2[i]]=inter.top();
            }
            inter.push(nums2[i]);
        }
        
        for(int i=0;i<s1;i++)
        {
            if(mpp.find(nums1[i])!=mpp.end())
            {
                ans[i]=mpp[nums1[i]];
            }
        }
        return ans;
        
    }
};
