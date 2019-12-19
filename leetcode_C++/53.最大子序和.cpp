/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN;
        int numsize = int(nums.size());
        for (int i = 0; i < numsize; i++)
        {
            int sum = 0;
            for (int j = i; j < numsize; j++)
            {
                sum = sum + nums[j];
                if (sum > max)
                {
                    max = sum;
                }
                
            }
            
        }
        return max; 
    }
};
// @lc code=end

