/*
Question : 1351 (LeetCode) : Count Negative Numbers is a Sorted Matrix
Given a m x n matrix grid which is sorted in non-increasing order both row-wise
ans column-wise, return the number of negative numbers in grid. 

Eg.
Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
Output: 8
Explanation: There are 8 negatives number in the matrix. 
*/


/*
* Approach : 
* 1) Brute force, travese all the 2d array and keep count of negative element
* 2) Binary search : For each row find the index of first negative element using binary search.
*/

#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;
//Approach 2: Binary search for each row.
int countNegatives(vector< vector<int> >& grid) {
        int cnt = 0;
        int n = grid[0].size();
        // We can use upper_bound function for using the binary search
        // for each row. 

        for(auto row : grid)
        {
            int i = upper_bound(row.begin(), row.end(), 0, greater<int>()) - row.begin();
            cnt += (n - i);          
        }

        return cnt;
}

int main()
{
    vector< vector<int> > grid = {{4,3,2,-1}, {3,2,1,-1}, {1,1,-1,-2}, {-1,-1,-2,-3}};
    int cnt = countNegatives(grid);
    cout<< "\n Negative Numbers Count : " << cnt << endl; 
}