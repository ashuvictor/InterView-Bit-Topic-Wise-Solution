
bool check(vector<int>A,int l,int r){
    if(l>=r)
    return true;
    int i=l+1;
    for(;i<r and A[l]>=A[i];i++)
    for(int j=i;j<r;j++){
        if(A[l]>A[j])
        return false;
    }
    bool left=check(A,l+1,i-1);
    bool right=check(A,i,r);
    return left and right;
}
int Solution::solve(vector<int> &A) {
    return check(A,0,A.size()-1);
}

int Solution::solve(vector<int> &A) {
    int root=INT_MIN;
    stack<int>st;
    for(int i=0;i<A.size();i++){
        while(!st.empty() and A[i]>st.top())
        {
            root=st.top();
            st.pop();
            
        }
        if(A[i]<root)
        return 0;
        st.push(A[i]);
    }
    return 1;
}
int Solution::solve(vector<int> &arr) {
    int currRoot  = INT_MIN;
    stack<int> st;
    for(int i = 0;i< arr.size(); i++){
        if(arr[i] < currRoot){
            return 0;
        }
        while(!st.empty() && arr[i] > st.top()){
            currRoot = st.top();
            st.pop();
        }
        st.push(arr[i]);
    }
    return 1;
}
