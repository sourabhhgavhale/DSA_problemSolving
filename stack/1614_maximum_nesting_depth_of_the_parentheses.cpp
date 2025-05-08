/*
Given a valid parentheses string s, return the nesting depth of s. The nesting depth is the maximum number of nested parentheses.

 

Example 1:

Input: s = "(1+(2*3)+((8)/4))+1"

Output: 3

Explanation:

Digit 8 is inside of 3 nested parentheses in the string.

Example 2:

Input: s = "(1)+((2))+(((3)))"

Output: 3

Explanation:

Digit 3 is inside of 3 nested parentheses in the string.

Example 3:

Input: s = "()(())((()()))"

Output: 3

 

Constraints:

1 <= s.length <= 100
s consists of digits 0-9 and characters '+', '-', '*', '/', '(', and ')'.
It is guaranteed that parentheses expression s is a VPS.

*/

class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        stack<int> st;
        int cnt = 0;
        int max_p = 0;

        for(int i=0; i<n; i++)
        {
            if(s[i] == '(')
            {
                st.push(s[i]);  
            }
            else if(s[i] == ')')
            {
                cnt = st.size();
                st.pop();
                max_p = max(max_p, cnt);
                cnt = 0;
            }
        }

        return max_p;
    }
};
