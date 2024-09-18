https://leetcode.com/problems/search-a-2d-matrix/description/

1)brute:
class Solution{
public:
    bool searchMatrix(vector<vector<int>> &mat, int target)
    {
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==target) return true;
            }
        }
        return false;
    }
};
2)better:
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    //Fuction to perform binary search 
    bool binarySearch(vector<int>& mat, int target) {
        int n = mat.size(); 
        int low = 0, high = n - 1;

        //Perform binary search
        while (low <= high) {
            int mid = (low + high) / 2;
            
            //Return true if target is found
            if (mat[mid] == target) return true;
            else if (target > mat[mid]) low = mid + 1;
            else high = mid - 1;
        }
        //Return false if target not found
        return false;
    }
public:
    //Function to search for a given target in matrix
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size();
        int m = mat[0].size();

        for (int i = 0; i < n; i++) {
            
            /*Check if there is a possibility that
            the target can be found in current row*/
            if (mat[i][0] <= target && target <= mat[i][m - 1]) {
                
                /*Return result fetched 
                from helper function*/
                return binarySearch(mat[i], target);
            }
        }
        // Return false if target is not found
        return false; 
    }
};

3)optimal:
code:

class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) 
        {
            int row=matrix.size();
            int col=matrix[0].size();
            int ans;
            int left=0;
            int right=(row*col)-1;
            while(left<=right)
            {
                int mid=(left+right)/2;
                if(matrix[mid/col][mid%col]==target)
                   return true;
                else if(matrix[mid/col][mid%col]>target)
                   right=mid-1;
                else
                   left=mid+1;
            }
            return false;
        }
   
};
