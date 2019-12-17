/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int head = 0;
        int mid = 0;
        int last = nums.size() - 1;

        if(target<=nums[head])//插入位置在开头的情况
            return head;
        if(target>nums[last])
            return last + 1;


        while (head < last)
        {
            mid = (last - head)/2 + head;
            if(target < nums[mid])
            {
                last = mid - 1;
            }else if(target > nums[mid])
            {
                head = mid + 1;
            }
            else return mid;
        }
        if(target<=nums[head])//插入位置在开头的情况
            return head;
        return head+1;//插入位置在结尾的情况     
    } 
};
// @lc code=end

