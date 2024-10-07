//https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&leftPanelTab=0//

#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int>arr;
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(arr1[i]==arr2[j])
        {
            arr.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
    }
    return arr;
}

//https://www.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

class Solution {
  public:
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) 
    {
        unordered_set<int> sa;  
        for(int i=0;i<n;i++)
        {
            sa.insert(a[i]);
        }
        vector<int> res;                            
    
        for (int i = 0; i <m; i++) 
        {
            if (sa.find(b[i]) != sa.end()) {
                res.push_back(b[i]); 
                sa.erase(b[i]);  
            }
        }
    
        return res.size();
    }
};
