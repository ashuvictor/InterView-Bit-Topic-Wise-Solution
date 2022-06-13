https://www.interviewbit.com/problems/n3-repeat-number/

You're given a read only array of n integers. Find out if any integer occurs more than n/3 times in the array in linear time and constant additional space.
If so, return the integer. If not, return -1.

If there are multiple solutions, return any one.

Example:

Input: [1 2 3 1 1]
Output: 1 
1 occurs 3 times which is more than 5/3 times.
int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int num1=-1,num2=-1,cnt1=0,cnt2=0;
    for(int i=0;i<A.size();i++){
      if(num1==A[i])
      cnt1++;
      else if(num2==A[i])cnt2++;
      else if(cnt1==0)
      {
          cnt1++;num1=A[i];
      }
      else if(cnt2==0)
     { num2=A[i];
     cnt2++;}
     else{cnt1--;cnt2--;}

    }
    int sz=A.size();
    cnt1=0,cnt2=0;
    for(int i=0;i<sz;i++){
        if(num1==A[i])
        cnt1++;
       if(num2==A[i])
        cnt2++;
    }
    if(cnt1>sz/3)
    return num1;
    else if(cnt2>sz/3)
    return num2;
    else
    return -1;
}