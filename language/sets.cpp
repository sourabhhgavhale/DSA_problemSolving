/*
** Sets is collection of the data without repetition.
** It is used to store unique elements.
** Question: Find the unique number of characters in the string.
** Answer: Use set to store the unique characters.
*/
#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;

    //Put all the characters in the set using for loop.
    set<char> s;
    for(auto c : str)
        s.insert(c);

    //print the set
    for(auto c : s)
        cout << c << " ";

    //print the size of the set
    cout << "\nSize of the set: " << s.size() << endl;

    return 0;
}