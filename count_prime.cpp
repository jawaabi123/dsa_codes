https://leetcode.com/problems/count-primes/description/


code:
class Solution {
public:
int primecount(int n)
{
    bool prime[n+1];
    int count=0;
    memset(prime,true,sizeof(prime));
    for(int i=2;i*i<=n;i++)
    {
         if(prime[i])
         {
             for(int p=i*i;p<=n;p=p+i)
             {
                 prime[p]=false;
             }
         }
    }
    for(int i=2;i<n;i++)
    {
        if(prime[i])
        count++;
    }
    return count;

}
    int countPrimes(int n) 
    {
        int ans=primecount(n);
        return ans;
    }
};
