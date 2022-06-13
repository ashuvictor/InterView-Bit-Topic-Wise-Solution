
checkout our improved IDE
Free Mock
Practice Mock Interview
interviewbit
Scaler
Explore offerings by SCALER
interviewbit
Description
Discussion
Submissions
Hints




Programming
/
Arrays
/
Largest Number
Largest Number

Medium

289

49
Asked In:
Amazon
Goldman Sachs
Microsoft
Given a list of non negative integers, arrange them such that they form the largest number.

For example:

Given [3, 30, 34, 5, 9], the largest formed number is 9534330.

Note: The result may be very large, so you need to return a string instead of an integer.
static bool comp(string x,string y){
    return x+y>y+x;
}
string Solution::largestNumber(const vector<int> &A) {
    vector<string>nums;
    for(int i=0;i<A.size();i++)
    nums.push_back(to_string(A[i]));
    sort(nums.begin(),nums.end(),comp);
string res="";
for(auto x:nums)
res+=x;
int i=0;
while(res[i]=='0')
{
  i++;
}
if(i==res.length())
 res="0";
return res;
}
