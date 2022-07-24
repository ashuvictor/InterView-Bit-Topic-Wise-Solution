


class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string ans;
        for(auto x:s)
        {
            if((x>='a' and x<='z') or (x>='0' and x<='9'))
                ans+=x;
        }
   string temp=ans;
        reverse(temp.begin(),temp.end());
        return ans==temp;
    }
};



bool isAlphaNumeric(char c){
    if((c>='0'&&c<='9')||(c>='a'&&c<='z')||(c>='A'&&c<='Z'))
     return true;
    return false;
}
int Solution::isPalindrome(string A) {
int i=0,j=A.size()-1;


while(i<=j)
{
    if(!isAlphaNumeric(A[i]))
    {
        i++;continue;
    }
    if(!isAlphaNumeric(A[j]))
    {
        j--;continue;
    }
    if(A[i]!=A[j] and abs(A[i]-A[j])!=32)
    return 0;
    i++;j--;
    
}
return 1;
}
