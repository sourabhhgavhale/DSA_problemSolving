/*
Problem statement : 
A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:
1   2   9   10  25
4   3   8   11  24
5   6   7   12  23
16  15  14  13  22
17  18  19  20  21

Your task is to find out the number in row y and column x.
Input
The first input line contains an integer t: the number of tests.
After this, there are t lines, each containing integers y and x.
Output
For each test, print the number in row y and column x.
Constraints

1 <= t <= 10^5
1 <= y,x <= 10^9

Example
Input:
3
2 3
1 1
4 2

Output:
8
1
15
*/

/*
Thinking process,
Figured the pattern the way numbers are filled. 
It goes like while changing the direction for next batch.
index
1        1 -> 1
2        3 -> 2,3,4
3        5 -> 5,6,7,8,9
4        7 -> 10,11,12,13,14,15,16
5        9 -> 17,18,19,20,21,22,23,24,25
6        11 -> so on.

It looks like triangle or pyramid.
Any group : mid element is on diagonal. (1,1) = 1 , (2,2) = 3, (3,3) = 7, (4,4) = 13
Left of mid is on row and right of the mid is on column.
*/