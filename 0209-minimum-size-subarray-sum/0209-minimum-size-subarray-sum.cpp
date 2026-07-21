class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0 , r = 0 , curSum = 0 , len = nums.size()+1;
        while(r < nums.size())
        {
            curSum += nums[r] ;
            while(curSum >= target)
            {
                len = min(len,r-l+1) ;
                curSum -= nums[l++] ;
            }
            r++ ;
        }
        if(len > nums.size()) len = 0 ;
        return len ;
    }
};