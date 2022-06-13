



int countSmaller(vector<int>row,int mid){
    int l=0;
    int h=row.size()-1;
    while(l<=h){
        int m=(l+h)>>1;
        if(row[m]<=mid)
        {
            l=m+1;
        }
        else
        {
            h=m-1;
        }
    }
    return l;
}
int Solution::findMedian(vector<vector<int> > &A) {
    int n=A.size();
    int m=A[0].size();
    int low=INT_MIN;
    int high=INT_MAX;
    while(low<=high){
        int mid=(low+high)>>1;
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=countSmaller(A[i],mid);
        }
        if(cnt<=(n*m)/2)
        low=mid+1;
        else
        high=mid-1;
    }
    return low;
}
