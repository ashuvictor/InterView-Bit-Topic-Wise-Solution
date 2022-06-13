





Problem Description

Given an array A of positive integers,call a (contiguous,not necessarily distinct) subarray of A good if the number of different integers in that subarray is exactly B.

(For example: [1, 2, 3, 1, 2] has 3 different integers 1, 2 and 3)

Return the number of good subarrays of A.



Problem Constraints
1 <= |A| <= 40000

1 <= A[i] <= |A|

1 <= B <= |A|



Input Format
The first argument given is the integer array A.

The second argument given is an integer B.



Output Format
Return an integer denoting the number of good subarrays of A.
int atmost(int B,vector<int>&A){
    int i=0,j=0;
    map<int,int>mp;int count=0;
    while(i<A.size())
    {
        mp[A[i]]++;
        while(mp.size()>B){
            auto it=mp.find(A[j]);
            it->second--;
            if(it->second==0)
            mp.erase(it);
            j++;
        }
        count+=i-j+1;
i++;
    }
    return count;
}
int Solution::solve(vector<int> &A, int B) {
    return atmost(B,A)-atmost(B-1,A);
}



int Solution::solve(vector<int> &A, int B) {
    
     int res = 0;
    int K = B;
    vector<int> m(A.size() + 1);
  for(auto i = 0, j = 0, prefix = 0, cnt = 0; i < A.size(); ++i) {
    if (m[A[i]]++ == 0) ++cnt;
    if (cnt > K) --m[A[j++]], --cnt, prefix = 0;
    while (m[A[j]] > 1) ++prefix, --m[A[j++]];
    if (cnt == K) res += prefix + 1;
  }
  return res;
}