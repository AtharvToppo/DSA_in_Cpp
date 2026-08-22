class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        vector<int>count(arr.size(),0);
        int missing,duplicate;
        for(int i=0;i<arr.size();i++)
        {
            count[arr[i]-1]++;
        }
        // Duplicate number
        for(int i=0;i<count.size();i++)
        {
            if(count[i]==2)
            {
                duplicate=i+1;
                break;
            }
        }
        // missing number
        for(int i=0;i<count.size();i++)
        {
            if(count[i]==0)
            {
                missing=i+1;
                break;
            }
        }
        return {duplicate,missing};
    }
};