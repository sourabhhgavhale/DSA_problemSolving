class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1 || n == 0 || k == 0)
            return 0;

        sort(nums.begin(), nums.end());
        int minv = INT_MAX;
        for(int i = 0; i<=n-k; i++)
        {
            minv = min(minv, nums[i+k-1] - nums[i]);
        }

        return minv;

    }
};
