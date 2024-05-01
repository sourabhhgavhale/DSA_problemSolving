/*
Problem Statement:
You are given all numbers between 1,2,..,n except one. Your task is to find the missing number.
Input
The first input line contains an integer n.
The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).
Output
Print the missing number.
Constraints

2 < n < 2 * 10^5

Example
Input:
5
2 3 1 5

Output:
4
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){

    long long n;
    cin >> n;
    vector<long long> ans;
    long long sum = 0;
    for(long long i = 0; i < n-1; i++)
    {
        long long temp;
        cin >> temp;
        sum += temp;
    }

    long long total = n*(n+1)/2;
    cout << total - sum << endl;

    return 0;
}
