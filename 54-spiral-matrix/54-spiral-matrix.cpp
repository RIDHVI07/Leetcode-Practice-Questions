class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
          int left =0,right = matrix[0].size()-1;
        int top = 0, bottom = matrix.size()-1;
        vector<int>res;
        while(left<=right && top<=bottom)
        {
            for(int i =left;i<=right;i++)
            {
                res.push_back(matrix[top][i]);
            }
            if(++top>bottom)
                break;
            
            for(int i=top;i<=bottom;i++)
            {
                res.push_back(matrix[i][right]);
            }
            if(--right<left)
                break;
           
          
            for(int i = right;i>=left;i--)
            {
                res.push_back(matrix[bottom][i]);
            }
            
            if(--bottom<top)
                break;
            
            
            for(int i=bottom;i>=top;i--)
            {
                res.push_back(matrix[i][left]);
            }
            if(++left>right)
                break;
           
        }
        return res;
    }
};