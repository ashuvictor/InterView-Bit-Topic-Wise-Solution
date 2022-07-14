
Find the longest increasing subsequence of a given array of integers, A.

In other words, find a subsequence of array in which the subsequence’s elements are in strictly increasing order, and in which the subsequence is as long as possible. 

This subsequence is not necessarily contiguous, or unique.

In this case, we only care about the length of the longest increasing subsequence.



int Solution::lis(const vector<int> &A) {
    vector<int>temp;
    temp.push_back(A[0]);
    int n=A.size();
    for(int i=1;i<n;i++){
        if(A[i]>temp.back())
        {
            temp.push_back(A[i]);
        }
        else
        {
            int ind=lower_bound(temp.begin(),temp.end(),A[i])-temp.begin();
            temp[ind]=A[i];
        }
    }
    return temp.size();
}
