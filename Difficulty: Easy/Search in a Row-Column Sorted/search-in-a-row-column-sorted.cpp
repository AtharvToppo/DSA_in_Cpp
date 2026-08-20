class Solution {
  public:
    bool matSearch(vector<vector<int>> &arr, int x) {
        // code here
        int up=arr.size()-1,right=0;
        while(up>=0 && right<arr[0].size())
        {
            if(arr[up][right]==x)
            {
                return true;
            }
            else if(arr[up][right]<x)
            {
                right++;
            }
            else
            {
                up--;
            }
        }
        return false;
    }
};