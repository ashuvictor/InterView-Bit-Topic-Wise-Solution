
Given a collection of candidate numbers (C) and a target number (T), find all unique combinations in C where the candidate numbers sums to T.

Each number in C may only be used once in the combination.

Note:

All numbers (including target) will be positive integers.
Elements in a combination (a1, a2, … , ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
The solution set must not contain duplicate combinations.
Example :

Given candidate set 10,1,2,7,6,1,5 and target 8,

A solution set is:

[1, 7]
[1, 2, 5]
[2, 6]
[1, 1, 6]




void solve(int st,int n,vector<int>&A,int target,vector<int>temp,vector<vector<int>>&ans){
    if(target==0)
    {
        ans.push_back(temp);return;
    }
    else if(target<0)
    return;
    else{
         for(int i=st;i<n;i++){
             if(i>st and A[i]==A[i-1])
             continue;
        temp.push_back(A[i]);
        solve(i+1,n,A,target-A[i],temp,ans);
        temp.pop_back();
    }
    }
   
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
       sort(A.begin(),A.end());
    vector<vector<int>>ans;
    vector<int>temp;
    int n=A.size();
    solve(0,n,A,B,temp,ans);
    return ans;
}
