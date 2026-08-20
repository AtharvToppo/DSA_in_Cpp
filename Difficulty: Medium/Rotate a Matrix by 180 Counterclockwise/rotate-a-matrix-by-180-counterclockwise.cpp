class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int rows=mat.size(),cols=mat[0].size();
        for(int i=0;i<rows;i++)
        {
            int start=0,end=cols-1;
            while(start<end)
            {
                swap(mat[i][start],mat[i][end]);
                start++,end--;
            }
        }
        for(int j=0;j<cols;j++)
        {
            int start=0,end=rows-1;
            while(start<end)
            {
                swap(mat[start][j],mat[end][j]);
                start++,end--;
            }
        }
        
    }
};