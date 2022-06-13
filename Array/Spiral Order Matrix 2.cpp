
Given an integer A, generate a square matrix filled with elements from 1 to A2 in spiral order.



Input Format:

The first and the only argument contains an integer, A.
Output Format:

Return a 2-d matrix of size A x A satisfying the spiral order.
Constraints:

1 <= A <= 1000
Examples:

Input 1:
    A = 3

Output 1:
    [   [ 1, 2, 3 ],
        [ 8, 9, 4 ],
        [ 7, 6, 5 ]   ]

Input 2:
    4

Output 2:
    [   [1, 2, 3, 4],
        [12, 13, 14, 5],
        [11, 16, 15, 6],
        [10, 9, 8, 7]   ]

vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>>ans(A,vector<int>(A));
    int top=0;
    int bottom=A-1;
    int left=0;
    int right=A-1;int c=1;
    while(top<=bottom and left<=right){
     for(int i=left;i<=right;i++){
         ans[top][i]=c;
         c++;
     }
     top++;
     for(int i=top;i<=bottom;i++){
         ans[i][right]=c;
         c++;
     }
     right--;
     if(top<=bottom){
         for(int i=right;i>=left;i--){
             ans[bottom][i]=c;
             c++;
         }
         bottom--;
     }
     if(left<=right){
         for(int i=bottom;i>=top;i--)
         {
             ans[i][left]=c;
             c++;
         }
         left++;
     }
    }
    return ans;
}
