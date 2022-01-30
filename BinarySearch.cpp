/*
https://leetcode.com/problems/binary-search/
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left =0;
        int right = nums.size()-1;
        int index = -1;
        while(left <= right)
        {
            index = (left+right)/2;
            if(target == nums[index])
            {
                return index;
            }
            else if(target < nums[index])
            {
                right = index - 1;
            }
            else
            {
                left = index + 1;
            }
        }
        return -1;
    }
};
