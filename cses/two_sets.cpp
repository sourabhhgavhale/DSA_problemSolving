/*
Problem Statement:
Your task is to divide the numbers 1,2,\ldots,n into two sets of equal sum.
Input
The only input line contains an integer n.
Output
Print "YES", if the division is possible, and "NO" otherwise.
After this, if the division is possible, print an example of how to create the sets. First, print the number of elements in the first set followed by the elements themselves in a separate line, and then, print the second set in a similar way.
Constraints

1 <= n <= 10^6

Example 1
Input:
7

Output:
YES
4
1 2 4 7
3
3 5 6
Example 2
Input:
6

Output:
NO
*/

#include<iostream>
#include<vector>
#include<algorithm>
typedef long long ll;

using namespace std;
/*
Logic:
-> To check if it can be divided in two sets or not is simple.
-> Check if sum of 1,2,3...,n numbers is divisible by 2 or not.
-> If yes that means it can be divided in two groups else not.
-> Now that we have figured it out that then check for target sum for sum/2;
*/
int main()
{
    ll n;
    cin>>n;

    ll sum = n*(n+1) / 2;

    if(sum%2 == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
