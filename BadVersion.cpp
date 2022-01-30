/*
https://leetcode.com/problems/first-bad-version/
*/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i=1;
        int j=n;
        int idx = 1;
        
        while(i<j)
        {
            idx = i+ (j-i)/2;
            if(true == isBadVersion(idx))
            {
                j = idx;
            }
            else
            {
                i = idx+1;
            }
        }
        return i;
    }
};
