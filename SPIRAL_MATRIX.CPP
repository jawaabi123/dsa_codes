https://leetcode.com/problems/spiral-matrix/description/


CODE:

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int>ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int left=0,right=col-1,top=0,bot=row-1;
        while(left<=right && top<=bot)
        {
            for(int i=left;i<=right;i++)
               ans.push_back(matrix[top][i]);  //to move left to right
            top++;
        
            for(int i=top;i<=bot;i++)
                    ans.push_back(matrix[i][right]); //to move top to bottom
             right--;
            
            if(top<=bot)
            {
                  for(int i=right;i>=left;i--)
                     ans.push_back(matrix[bot][i]); //to move right to left
                bot--;
            }
           
            if(left<=right)
            {
                for(int i=bot;i>=top;i--)
                   ans.push_back(matrix[i][left]); //to move bottom to top
               left++;
            }
            
        }
        return ans;
    }
};
