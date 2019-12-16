/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = -1;
        int j = -1;
        int flag = 0;
        vector<int> ans;
        for(i=0;i<nums.size();i++){
            for(j=i+1;j<nums.size();j++)
                if(nums[i]+nums[j]==target){
                    flag = 1;
                    break;
                }
            if(flag)
                break;
        }      
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
};

