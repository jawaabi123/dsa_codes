https://www.codingninjas.com/studio/problems/three-sum_6922132?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1



code:

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

