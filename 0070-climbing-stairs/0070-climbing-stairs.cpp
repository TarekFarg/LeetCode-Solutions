class Solution {
    vector<int> dp ;
    int calc(int st , int & n)
    {
        if(st >= n)
            return (st == n) ;
        if(dp[st]!=-1)
            return dp[st] ;
        dp[st] = calc(st+1,n) + calc(st+2 , n) ;
        return dp[st] ;
    }
public:
    int climbStairs(int n) {
        dp = vector<int>(n,-1) ;
        return calc(0,n) ;
    }
};