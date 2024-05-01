/*
Problem Statement: 
A permutation of integers 1,2,\ldots,n is called beautiful if there are no adjacent elements whose difference is 1.
Given n, construct a beautiful permutation if such a permutation exists.
Input
The only input line contains an integer n.
Output
Print a beautiful permutation of integers 1,2,\ldots,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".
Constraints

1 < n < 10^6

Example 1
Input:
5

Output:
4 2 5 3 1
Example 2
Input:
3

Output:
NO SOLUTION
*/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    long long n;
    cin>>n;
    
    if(n  == 1)
    {
        cout<<"1"<<endl;
        return 0;
    }
        
    if(n <= 3)
    {
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
        
    vector<long long> output;
    for(int i=2; i<n+1; i+=2)
    {
        output.push_back(i);
    }

    for(int i=1; i<n+1; i+=2)
    {
        output.push_back(i);
    }

    for(auto num : output)
        cout<<num<<" ";
    
    cout<<endl;
    
}