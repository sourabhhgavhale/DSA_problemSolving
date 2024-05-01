/*
Problem Statement: 
Consider an algorithm that takes as input a positive integer n. 
If n is even, the algorithm divides it by two, and if n is odd, 
the algorithm multiplies it by three and adds one. The algorithm repeats this, 
until n is one. For example, the sequence for n=3 is as follows:
3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
Your task is to simulate the execution of the algorithm for a given value of n.
Input
The only input line contains an integer n.
Output
Print a line that contains all values of n during the algorithm.
Constraints

1 <  n < 10^6

Example
Input:
3

Output:
3 10 5 16 8 4 2 1
*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    long long n;
    cin >> n;
    vector<long long> ans;

    while(n != 1 && n > 0)
    {
        if(n % 2 == 0){
            ans.push_back(n);
            n = n/2;
        }
        else
        {
            ans.push_back(n);
            n = 3*n + 1;
            
        }
    }

    ans.push_back(1);

    for(long long i : ans)
        cout << i << " ";
    cout << endl;

    return 0;
}

/*
Retrosepctive:
1. The problem is simple, just follow the instructions and print the numbers.
2. The only thing to remember is to use long long for the input and output.
*/