/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size() - 1;
        for (int i = len; i >= 0 ; i--)
        {
            if (digits[i] == 9)
            {
                digits[i] = 0;
            }else
            {
                digits[i] +=1;
                break;
            }
        }
        if (digits[0] == 0)
        {
            digits.push_back(0);
            digits[0] = 1;            
        }
        return digits;
        
    }
};
// @lc code=end

