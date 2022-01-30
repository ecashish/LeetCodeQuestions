/*
https://leetcode.com/problems/search-insert-position/
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        int j = nums.size()-1;
        int idx = 0;
        while(i<=j)
        {
            idx = i+(j-i)/2;
            if(target == nums[idx])
            {
                return idx;
            }
            else if(target < nums[idx])
            {
                j = idx -1;
            }
            else
            {
                i = idx +1;
            }
        }
        return j+1;
    }
};
