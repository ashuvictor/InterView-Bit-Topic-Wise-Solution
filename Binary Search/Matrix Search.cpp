


Given a matrix of integers A of size N x M and an integer B.

Write an efficient algorithm that searches for integar B in matrix A.

This matrix A has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than or equal to the last integer of the previous row.
Return 1 if B is present in A, else return 0.

Note: Rows are numbered from top to bottom and columns are numbered from left to right.


int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int n=A.size();
    int m=A[0].size();
    int low=0;
    int high=(m*n)-1;
    while(low<=high){
        int mid=(low+high)>>1;
        if(A[mid/m][mid%m]==B)
        return 1;
        else if(A[mid/m][mid%m]>B)
      high=mid-1;
        else
       low=mid+1;

    }
    return 0;
}
