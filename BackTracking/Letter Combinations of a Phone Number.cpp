

Given a digit string, return all possible letter combinations that the number could represent.

A mapping of digit to letters (just like on the telephone buttons) is given below.



void solve(int index,string A,string op,vector<string>&ans,unordered_map<int,string>mp)
{
    if(index>=A.size())
    {
        ans.push_back(op);return;
    }
    int number=A[index]-'0';
    string value=mp[number];
    for(int i=0;i<value.length();i++){
        op.push_back(value[i]);
        solve(index+1,A,op,ans,mp);
        op.pop_back();
    }
}
vector<string> Solution::letterCombinations(string A) {
   vector<string>ans;
    if(A.size()==0)
    return ans;
    
      unordered_map<int,string>mp;
      mp[1]="1";mp[0]="0";
         mp[2]="abc";

        mp[3]="def";

        mp[4]="ghi";

        mp[5]="jkl";

        mp[6]="mno";

        mp[7]="pqrs";

        mp[8]="tuv";

        mp[9]="wxyz";
     string op;
        int index=0;
        solve(0,A,op,ans,mp);
        return ans;
}
