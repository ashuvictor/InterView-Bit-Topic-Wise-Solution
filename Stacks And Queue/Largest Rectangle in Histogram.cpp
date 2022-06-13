



Given an array of integers A .

A represents a histogram i.e A[i] denotes height of the ith histogram's bar. Width of each bar is 1.

Find the area of the largest rectangle formed by the histogram.


int Solution::largestRectangleArea(vector<int> &A) {
    int ans=0;
    stack<int>st;
    int n=A.size();
    vector<int>leftSmall(n);
    vector<int>rightSmall(n);
    for(int i=0;i<n;i++){
while(!st.empty() and A[st.top()]>=A[i])
st.pop();
leftSmall[i]=st.empty()?0:st.top()+1;
st.push(i);
    }
    while(!st.empty())
    st.pop();
    for(int i=n-1;i>=0;i--){
while(!st.empty() and A[st.top()]>=A[i])
st.pop();
rightSmall[i]=st.empty()?(n-1):(st.top()-1);
st.push(i);
    }

    for(int i=0;i<n;i++){
        ans=max(ans,A[i]*(rightSmall[i]-leftSmall[i]+1));
    }

    return ans;
}
