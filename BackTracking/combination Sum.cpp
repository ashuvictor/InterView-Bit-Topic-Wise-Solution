



Given an array of candidate numbers A and a target number B, find all unique combinations in A where the candidate numbers sums to B.

The same repeated number may be chosen from A unlimited number of times.

Note:

1) All numbers (including target) will be positive integers.

2) Elements in a combination (a1, a2, … , ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).

3) The combinations themselves must be sorted in ascending order.

4) CombinationA > CombinationB iff (a1 > b1) OR (a1 = b1 AND a2 > b2) OR ... (a1 = b1 AND a2 = b2 AND ... ai = bi AND ai+1 > bi+1)

5) The solution set must not contain duplicate combinations.

 



Problem Constraints
1 <= |A| <= 20 

1 <= A[i] <= 50

1 <= B <= 500



Input Format
The first argument is an integer array A.

The second argument is integer B.



Output Format
 Return a vector of all combinations that sum up to B.



Example Input
Input 1:

A = [2, 3]
B = 2
Input 2:

A = [2, 3, 6, 7]
B = 7


Example Output
Output 1:

[ [2] ]
Output 2:

[ [2, 2, 3] , [7] ]



void solve(int st,int n,vector<int>&A,int target,vector<int>temp,vector<vector<int>>&ans){
    if(target==0)
    {
        ans.push_back(temp);return;
    }
    else if(target<0)
    return;
    else{
         for(int i=st;i<n;i++){
        temp.push_back(A[i]);
        solve(i,n,A,target-A[i],temp,ans);
        temp.pop_back();
    }
    }
   
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    vector<vector<int>>ans;
    vector<int>temp;
    int n=A.size();
    solve(0,n,A,B,temp,ans);
    set<vector<int>>S;
    for(int i=0;i<ans.size();i++){
        S.insert(ans[i]);
    }
    vector<vector<int>>fina;
    auto it=S.begin();
    while(it!=S.end())
    {
        fina.push_back(*it);it++;
    }
    return fina;
}
