/*
https://leetcode.com/problems/contains-duplicate/
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        size_t len = nums.size();
      
	  // If vector size is less or equal to 1 it is impossible to contain a duplicate.
      if (len <= 1) { 
          return false; 
      }
      
	  std::unordered_set<int> set;
      
	  for (int i : nums) {
        if (set.find(i) != set.end()) {
            return true;
        } else {
            set.insert(i);
        }
      }
	  
	  return false;
    }
};
