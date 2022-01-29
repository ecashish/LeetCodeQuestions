/*
https://leetcode.com/problems/longest-substring-without-repeating-characters/

https://www.code-recipe.com/post/longest-substring-without-repeating-characters
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0, count = 0;
		 string res;
        int len = s.length();
        int ret = -1;
		 for (int i = 0; i < len; i++)
		 {
             ret = res.find(s[i]);
			 if (ret == -1)
			 {
				 res += s[i];
                 count++;
				 if (count > max)
					 max = count;
			 }
			 else
			 {
				 res.erase(res.begin(), res.begin() + ret + 1);
				 res += s[i];
				 count = res.length();
			 }
		 }
		 return max;        
    }
};
