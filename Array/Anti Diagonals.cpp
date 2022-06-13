


Problem Description

Give a N*N square matrix, return an array of its anti-diagonals. Look at the example for more details.
Example:

Input:

1 2 3
4 5 6
7 8 9
Return the following:
[ 
  [1],
  [2, 4],
  [3, 5, 7],
  [6, 8],
  [9]
]


Input: 
1 2
3 4
Return the following: 
[
  [1],
  [2, 3],
  [4]
]



vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int>>ans;
    int n=A.size();
    int row=0;
    int i=0;
    while(row<n){
        int r=row;
        int c=i;vector<int>temp;
        while(r<n and c>=0)
        {
            temp.push_back(A[r][c]);
            r++;
            c--;
        }
        ans.push_back(temp);
        if(i==n-1)
row++;
else
i++;
    }
    return ans;
}
