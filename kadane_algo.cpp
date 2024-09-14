https://leetcode.com/problems/maximum-subarray/

code:

brute:

long long maxSubarraySum(vector<int> arr, int n)
{
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=arr[k];
                if (sum > maxsum) {
                  maxsum = sum;
                }
            }
        }
    }
    return maxsum;
}

better:

long long maxSubarraySum(vector<int> arr, int n)
{
    int maxsum=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if (sum > maxsum) 
            {
               maxsum = sum;
            }
        }
    }
    return maxsum;
}

optimal:

long long maxSubarraySum(vector<int> arr, int n)
{
    long long max=INT_MIN;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<0)
        {
            sum=0;
        }
        if(sum>max)
        {
            max=sum;
        }
        
    }
    return max;
}

