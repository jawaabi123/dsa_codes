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
};

brute2:
