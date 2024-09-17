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
