/*
Problem Statement:
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
Input
The only input line contains a string of n characters.
Output
Print one integer: the length of the longest repetition.
Constraints

1 < n < 10^6

Example
Input:
ATTCGGGA

Output:
3
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int main()
{
    string s;
    int curr_cnt = 0;
    int max_cnt = 0;
    char prev = ' ';
    cin >> s;
    //cout<<"String is "<<s<<endl;
    int n = s.length();
    prev = s[0];
    curr_cnt = 1;

    for(int i=1; i<n; i++)
    {
        if(s[i] == prev)
        {
            curr_cnt++;
        }
        else
        {
            max_cnt = max(max_cnt, curr_cnt);
            curr_cnt = 1;
            prev = s[i];
        }
    }

    cout << max(max_cnt, curr_cnt) << endl;

}

/*
Restrospective:
1. The problem is simple. We need to find the longest repetition of a character in a string.
2. We can do this by iterating through the string and keeping track of the current count of the character.
3. We also need to keep track of the maximum count of the character.
4. While printing the output, we need to take the maximum of the current count and the maximum count.
5. The time complexity of the solution is O(n) where n is the length of the string.
*/