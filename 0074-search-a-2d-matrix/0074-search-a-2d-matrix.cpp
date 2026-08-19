class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int start=0,end=(matrix.size()*matrix[0].size())-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            /*
            2D matrix is store in 1D array form, so by the help of index we can find out the row and cols index
            [mid / matrix[0].size()] here mid/col means it return rows index of the 2D matrix
            [mid % matrix[0].size()] here mid%col means it return cols index of the 2D matrix
            */
            if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]==target)
            {
                return true;
            }
            else if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]>target)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return false;
    }
};