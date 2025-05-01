/*
Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
*/


Answer:
public:
    void rev(vector<char>& s, int l, int r)
    {
        if(l >= r)
            return;

        char temp;
        temp = s[l];
        s[l] = s[r];
        s[r] = temp;

        rev(s, ++l, --r);

    }

    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size()-1;

	//calling recursive function
        rev(s, i, j);
    }
};