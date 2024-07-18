class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int n = nums.size();
        double cur_sum = 0;
        double max_avg = 0;

        for(int i=0; i<k; i++)
            cur_sum += nums[i];

        max_avg = cur_sum / k;
        for(int i=k; i<n; i++)
        {
            cur_sum -= nums[i-k];
            cur_sum += nums[i];
            max_avg = max(max_avg, cur_sum/k);
        }

        return max_avg;
    }
};
