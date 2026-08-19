class Solution {
public:
    void rotate(vector<vector<int>>& matrix)
    {
        // For 90-degree rotation first find Transpose of a matrix(using swap function for Transpose of square matrix)
        for(int i=0;i<matrix.size()-1;i++)
        {
            for(int j=i+1;j<matrix[0].size();j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        // swap the values: columns-wise then you will get 90-degree rotated matrix
        for(int i=0;i<matrix.size();i++)
        {
            int start=0,end=matrix[0].size()-1;
            while(start<end)
            {
                swap(matrix[i][start],matrix[i][end]);
                start++,end--;
            }
        }
    }
};