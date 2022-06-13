
Given a read only array of n + 1 integers between 1 and n, find one number that repeats in linear time using less than O(n) space and traversing the stream sequentially O(1) times.
Sample Input:

[3 4 1 4 1]

Sample Output:

1


int Solution::repeatedNumber(const vector<int> &A) {
    int slow=A[0];
    int fast=A[0];
    do{
        slow=A[slow];
        fast=A[A[fast]];
    }while(slow!=fast);
    fast=A[0];
    while(slow!=fast)
    {
        slow=A[slow];
        fast=A[fast];
    }
    return slow;
}