
You are given an integer N and the task is to reverse the digits of the given integer. Return 0 if the result overflows and does not fit in a 32 bit signed integer



int Solution::reverse(int A) {
    long k=A;
    bool sign=false;
    if(k<0)
    {  k=k*-1;
        sign=true;
    }
    long ans=0;
    for(long i=k;i>0;i=i/10)
    {
        ans=ans*10+(i%10);
    }
    if(ans>INT_MAX)
    return 0;
    else return sign?-1*(int)ans:(int)ans;
}
