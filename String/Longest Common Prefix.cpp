



Given the array of strings A, you need to find the longest string S which is the prefix of ALL the strings in the array.

Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1 and S2.

For Example: longest common prefix of "abcdefgh" and "abcefgh" is "abc".



Input Format
The only argument given is an array of strings A.



Output Format
Return the longest common prefix of all strings in A.



Example Input
Input 1:

A = ["abcdefgh", "aefghijk", "abcefgh"]
Input 2:

A = ["abab", "ab", "abcd"];


Example Output
Output 1:



"a"
Output 2:

"ab"


int findLen(vector<string> &A){
    int ans=A[0].length();
    for(int i=1;i<A.size();i++){
        if(ans<A[i].length())
        ans=A[i].length();
    }
    return ans;
}
string Solution::longestCommonPrefix(vector<string> &A) {
int minLen=findLen(A);
string result="";
char current;
for(int i=0;i<minLen;i++){
    current=A[0][i];
    for(int j=1;j<A.size();j++){
        if(A[j][i]!=current)
        return result;

    }
    result.push_back(current);
}
return result;
}
