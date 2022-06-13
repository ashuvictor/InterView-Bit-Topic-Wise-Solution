


Given two integers n and k, return all possible combinations of k numbers out of 1 2 3 ... n.

Make sure the combinations are sorted.

To elaborate,

Within every entry, elements should be sorted. [1, 4] is a valid entry while [4, 1] is not.
Entries should be sorted within themselves.
Example :

If n = 4 and k = 2, a solution is:

[
  [1,2],
  [1,3],
  [1,4],
  [2,3],
  [2,4],
  [3,4],
]



void solve(int n,int k,int index,vector<int>temp,vector<vector<int>>&ans){
    if(k==0)
    {
        ans.push_back(temp);return;
    }
    for(int i=index;i<=n;i++){
        temp.push_back(i);
        solve(n,k-1,i+1,temp,ans);
        temp.pop_back();
    }
}
vector<vector<int> > Solution::combine(int A, int B) {
vector<vector<int>>ans;
vector<int>temp;
int index=1;
solve(A,B,index,temp,ans);
return ans;
}

