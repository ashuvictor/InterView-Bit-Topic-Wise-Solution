


find the length of the longest substring without repeating characters.

Example:

The longest substring without repeating letters for "abcabcbb" is "abc", which the length is 3.

For "bbbbb" the longest substring is "b", with the length of 1.

int Solution::lengthOfLongestSubstring(string A) {
   vector<int>freq(256,-1);
    int left=0;
    int right=0;
    int ans=0;
int n=A.size();
while(right<n){
    if(freq[A[right]!=-1])
    left=max(left,freq[A[right]]+1);
    freq[A[right]]=right;
    ans=max(ans,right-left+1);
    right++;
}
return ans;
}
