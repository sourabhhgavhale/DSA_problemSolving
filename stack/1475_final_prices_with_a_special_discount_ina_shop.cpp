/*
You are given an integer array prices where prices[i] is the price of the ith item in a shop.

There is a special discount for items in the shop. If you buy the ith item, then you will receive a discount equivalent to prices[j] where j is the minimum index such that j > i and prices[j] <= prices[i]. Otherwise, you will not receive any discount at all.

Return an integer array answer where answer[i] is the final price you will pay for the ith item of the shop, considering the special discount.

 

Example 1:

Input: prices = [8,4,6,2,3]
Output: [4,2,4,2,3]
Explanation: 
For item 0 with price[0]=8 you will receive a discount equivalent to prices[1]=4, therefore, the final price you will pay is 8 - 4 = 4.
For item 1 with price[1]=4 you will receive a discount equivalent to prices[3]=2, therefore, the final price you will pay is 4 - 2 = 2.
For item 2 with price[2]=6 you will receive a discount equivalent to prices[3]=2, therefore, the final price you will pay is 6 - 2 = 4.
For items 3 and 4 you will not receive any discount at all.
Example 2:

Input: prices = [1,2,3,4,5]
Output: [1,2,3,4,5]
Explanation: In this case, for all items, you will not receive any discount at all.
Example 3:

Input: prices = [10,1,1,6]
Output: [9,0,1,6]
 

Constraints:

1 <= prices.length <= 500
1 <= prices[i] <= 1000
*/

/*
Solution :

Approach : Here we are trying to track the current discount that can be applied.
Create result array from input array.
Store the indices of the elements rather than elements.
*/

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> result = prices;
        stack<int> st;

        for(int i=0; i<prices.size(); i++)
        {
	/*
		Iterate through the input array.
		If stack is not empty and current price is less that prices[st.top()]
		Then use st.top()/indices to update new values for result array.
		Pop those indices meanwhile.
		Else if the value is increasing and price is more than the prices[st.top()]
		then push the indices to stack and continue. 
	*/
            while(!st.empty() && prices[st.top()] >= prices[i])
            {
                result[st.top()] -= prices[i];
                st.pop();
            }
            st.push(i);
        }

        return result;

    }
};
