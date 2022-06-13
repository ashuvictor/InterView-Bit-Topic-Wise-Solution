Problem Description
 
 

Given an integer array A of size N.

You need to check that whether there exist a element which is strictly greater than all the elements on left of it and strictly smaller than all the elements on right of it.

If it exists return 1 else return 0.

NOTE:

Do not consider the corner elements i.e A[0] and A[N-1] as the answer.


Problem Constraints
3 <= N <= 105

1 <= A[i] <= 109



Input Format
First and only argument is an integer array A containing N integers.



Output Format
Return 1 if there exist a element that is strictly greater than all the elements on left of it and strictly  smaller than all the elements on right of it else return 0.



Example Input
Input 1:

 A = [5, 1, 4, 3, 6, 8, 10, 7, 9]
Input 2:

 A = [5, 1, 4, 4]


Example Output
Output 1:

 1
Output 2:

 0


iterate over all left and right and check if there is a element



int Solution::perfectPeak(vector<int> &A) {
    int n=A.size();
    for(int i=1;i<n-1;i++){
        int current=A[i];
        int flag=1;
        for(int j=0;j<i;j++){
            if(current<=A[j])
            {
                flag=0;break;
            }
        }
        if(flag==0)
        continue;
        for(int j=i+1;j<n;j++){
            if(current>=A[j])
            {
                flag=0;break;
            }
        }
        if(flag)
        return 1;
    }
    return 0;
}



int Solution::perfectPeak(vector<int> &A) {
    int n=A.size();
    int i=1,l=A[0];
    if(n<3)
        return 0;
    while(i<n-1)
    {
        if(A[i]>l)
        {
            l=A[i];
            int j=i+1;
            while(j<n)
            {
                if(A[j]<l)
                {
                    i=j;
                    break;
                }
                j++;
            }
            if(j==n)    
                return 1;
        }
        i++;
    }
    return 0;
}

int Solution::perfectPeak(vector<int> &A) {
    //Brute Force 
    //o(n^2)
    //
        int n = A.size() ;
    //maximum left element 
    int mx = A[0] ; 
    vector<int> suffix(n+5,INT_MAX) ;
    suffix[n-1] = A[n-1] ;
    for(int i =n-2 ;i>=0 ;i--) suffix[i] = min(suffix[i+1] ,A[i+1]) ;

    for(int i = 1;i<n-1 ;i++)
    {
        int current = A[i]  ;
        if(current > mx && current < suffix[i]) return 1 ;
        mx =max(mx, current) ;
   
    }    

    return 0 ;
}