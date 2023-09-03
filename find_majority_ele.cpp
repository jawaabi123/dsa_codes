https://leetcode.com/problems/majority-element/

code:

class Solution 
{
public:
    int majorityElement(vector<int>& nums) 
    {
        int count=0;
        int ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                ans=nums[i];
                count=1;
            }
            else if(nums[i]==ans)
            {
                count++;
            }
            else if(nums[i]!=ans)
            {
                count--;
                
            }
        }
        return ans;
    }
};
