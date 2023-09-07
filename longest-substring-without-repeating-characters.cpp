https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

brute1:

class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int n=s.size();
        int max1=0;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
               set<int>se;
               for(int k=i;k<=j;k++)
               {
                    if(se.find(s[k])!=se.end())   //element is there
                    {
                        flag=1;
                        continue;
                    }
                    else
                    {
                        se.insert(s[k]);
                    }
               }
               if(flag==1)
               {
                  flag=0;
               }
               else
               {
                   if(se.size()>max1) max1=se.size();
               }
               
            }
        }
        return max1;
    }

optimized brute2:

class Solution {
public:
int lengthOfLongestSubstring(string s) 
{
        int maxans = INT_MIN;
        if(s.size()==0)
            return 0;
        
        
        for (int i = 0; i < s.length(); i++) 
        {
            unordered_set < int > set;
            for (int j = i; j < s.length(); j++) 
            {
                if (set.find(s[j]) != set.end())
                {
                    break;
                }
                set.insert(s[j]);
                int k=set.size();
                if(k>maxans) maxans=k;
            }
        }
        return maxans;
        

}
            
        
};

optimal1:

#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
        
        if(input.size()==0)
          return 0;
        int maxans = INT_MIN;
        int n=input.size();
        int l=0;
        set<int>set1;
        for(int r=0;r<n;r++)
        {
             if(set1.find(input[r])!=set1.end())
             {
                 while(l<r && set1.find(input[r])!=set1.end())
                 {
                     set1.erase(input[l]);
                     l++;
                 }
             }
             set1.insert(input[r]);
             maxans=max(maxans,r-l+1);
        }
        return maxans;
        
       
}

best(o(n)):

#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
        
        if(input.size()==0)
          return 0;
        int maxans = INT_MIN;
        int n=input.size();
        vector<int>mpp(256,-1);
        int l=0; //left pointer(start of substring)
        int r=0;
        for(int r=0;r<n;r++)
        {
             if(mpp[input[r]]!=-1)
             {
                 l=max(l,mpp[input[r]]+1);
             }
             mpp[input[r]]=r;
             maxans=max(maxans,r-l+1);
        }
        return maxans;
        
       
}
