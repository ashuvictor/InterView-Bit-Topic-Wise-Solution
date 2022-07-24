#include<bits/stdc++.h>
bool isPal(string s,int l,int h){
  while(l<h){
      if(s[l]==s[h])
      {
          l++,h--;
      }
      else
      return false;
  }
  return true;
}
void solve(int start,string A,vector<string>&temp,vector<vector<string>>&ans)
{
    if(start==A.size())
    {
        ans.push_back(temp);
        return;
    }
    for(int end=start;end<A.size();end++)
    {
        if(isPal(A,start,end))
        {
            temp.push_back(A.substr(start,end-start+1));
            solve(end+1,A,temp,ans);
            temp.pop_back();
        }
    }
}
vector<vector<string> > Solution::partition(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<string>>ans;
    vector<string>temp;
    solve(0,A,temp,ans);
    return ans;
    
    
    
    
}
