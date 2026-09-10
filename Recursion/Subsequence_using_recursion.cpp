// Subsequence using Recursion !!!
#include<iostream>
#include<vector>
using namespace std;

void subseq(int arr[],int index,int n,vector<vector<int>>&ans,vector<int>temp)
{
    //Base case
    if(index==n)
    {
        ans.push_back(temp);
        return;
    }
    
    // No node 
    subseq(arr,index+1,n,ans,temp);
    // Yes node 
    temp.push_back(arr[index]);
    subseq(arr,index+1,n,ans,temp);
}
int main()
{
    cout<<"Subsequence using Recursion !!!"<<endl;
    int size,arr[50];
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements of an Array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements of the Array:\n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    vector<vector<int>>ans; // 2D vector
    vector<int>temp; // 1D vector
    
    subseq(arr,0,size,ans,temp);
    cout<<endl;
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}