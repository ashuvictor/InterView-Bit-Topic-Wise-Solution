#include<bits/stdc++.h>
int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int sumGas=accumulate(A.begin(),A.end(),0);
    int sumCost=accumulate(B.begin(),B.end(),0);
    if(sumGas<sumCost)
    return -1;
    int ans=0;int remaining=0;
    for(int i=0;i<A.size();i++){
        remaining+=A[i]-B[i];
        if(remaining<0)
        {
            remaining=0;
            ans=i+1;
        }
    }
    return ans;
}
