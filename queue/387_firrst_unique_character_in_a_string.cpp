/*
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

 

Example 1:

Input: s = "leetcode"

Output: 0

Explanation:

The character 'l' at index 0 is the first character that does not occur at any other index.

Example 2:

Input: s = "loveleetcode"

Output: 2

Example 3:

Input: s = "aabb"

Output: -1

 

Constraints:

1 <= s.length <= 105
s consists of only lowercase English letters.

*/

class Solution {
public:
    int firstUniqChar(string s) {
        queue<pair<char, int>> q;
        vector<int> cnt (26,0);

        for(int i=0; i<s.length(); i++)
        {
            cnt[s[i] - 'a']++;
            pair<char, int> p = {s[i], i};
            q.push(p);
        }

        while(!q.empty())
        {
            pair<char, int> temp = q.front();
            if(cnt[temp.first - 'a'] == 1)
                return temp.second;
            
            q.pop();
        }

        return -1;
    }
};
