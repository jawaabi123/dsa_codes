https://leetcode.com/problems/search-a-2d-matrix/description/


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
