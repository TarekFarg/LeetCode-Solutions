class Solution {
    int n ;
    vector<int> dp ;
    int calc(int index , vector<int>& nums )
    {
        if(index >= n)
            return 0 ;

        if(dp[index] != -1)
            return dp[index] ;

        // leave -> calc(index+1, nums) ;
        // pick  -> calc(index+2 , nums) + nums[index]

        dp[index] = max( calc(index+1, nums) , calc(index+2 , nums)+nums[index]) ;

        return dp[index] ;
    }

public:
    int rob(vector<int>& nums) {
        n = nums.size() ;
        dp = vector<int>(n+1,-1) ;
        return calc(0,nums) ;
    }
};