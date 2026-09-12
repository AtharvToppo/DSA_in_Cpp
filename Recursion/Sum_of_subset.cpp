// Sum of Subset using Recursion !!!
#include<iostream>
#include<vector>
using namespace std;

void subset(int arr[],int index,int n,vector<vector<int>>&ans,vector<int>&temp,int sum,vector<int>&result)
{
    // Base case
    if(index==n)
    {
        result.push_back(sum); // put the sum of subset in result vector
        ans.push_back(temp); // put the subset in ans vector
        return;
    }
    
    // No node 
    subset(arr,index+1,n,ans,temp,sum,result);
    // Yes node 
    temp.push_back(arr[index]);
    subset(arr,index+1,n,ans,temp,sum+arr[index],result);
    temp.pop_back();
}
int main()
{
    cout<<"Sum of subset using Recursion !!!"<<endl;
    int size,arr[50];
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements of an Array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements of the Array: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<vector<int>>ans; // 2D vector
    vector<int>temp; // 1D vector
    vector<int>result;
    int sum=0;
    
    subset(arr,0,size,ans,temp,sum,result);
    
    cout<<"Sum of subset:\n";
    cout<<"Sum = subsets"<<endl;
    
    for(int i=0;i<ans.size();i++)
    {
        for(int k=i;k<=i;k++)
        {
            cout<<result[k];
        }
        cout<<" = ";
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}