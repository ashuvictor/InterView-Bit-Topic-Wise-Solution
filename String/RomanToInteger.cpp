

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

 

Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
class Solution {
public:
    int romanToInt(string s) {
                   map<char, int> m;
   m.insert({ 'I', 1 });
   m.insert({ 'V', 5 });
   m.insert({ 'X', 10 });
   m.insert({ 'L', 50 });
   m.insert({ 'C', 100 });
   m.insert({ 'D', 500 });
   m.insert({ 'M', 1000 });
  int ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(m[s[i]]<m[s[i+1]])
            {
                ans+=m[s[i+1]]-m[s[i]];continue;
            }
            else
            {
                ans+=m[s[i]];
            }
        }
        return ans;
    }
};
int value(char c){
    if(c == 'I'){
        return 1;
    }
    else if(c == 'V'){
        return 5;
    }
    else if(c == 'X'){
        return 10;
    }
    else if(c == 'L'){
        return 50;
    }
    else if(c == 'C'){
        return 100;
    }
    else if(c == 'D'){
        return 500;
    }
    else{
        return 1000;
    }
}

int Solution::romanToInt(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int sol = 0, last, sec_last;
    for(int i = A.size()-1; i >= 0; i--){
        char c = A[i];
        last = value(A[i]);
        if(i != 0){
            sec_last = value(A[i-1]);
        }
        sol = sol + last;
        if(sec_last < last){
            sol = sol - sec_last;
            i--;
        }
        sec_last = 0;
        last = 0;
    }
    
    return sol;
}