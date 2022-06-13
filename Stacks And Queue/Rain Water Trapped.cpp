

Given an integer array A of non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.




int Solution::trap(const vector<int> &A) {
    int n=A.size();
    int left=0;
    int right=n-1;
    int ans=0;int leftMax=0,rightMax=0;
    while(left<=right)
    {
        if(A[left]<=A[right])
        {
            if(leftMax<=A[left])
            {
                leftMax=A[left];
            }
            else{
                ans+=leftMax-A[left];
            }
            left++;
        }
        else{
            if(rightMax<=A[right])
            {
                rightMax=A[right];
            }
            else{
                ans+=rightMax-A[right];
            }
            right--;
        }
    }
    return ans;
}