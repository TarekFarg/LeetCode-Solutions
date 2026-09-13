class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if(nums.empty())
            return ans ;
        int st = nums[0] ;
        for(int i = 1 ; i <= nums.size() ; i++)
        {
            if(i == nums.size() || (long long)nums[i]-nums[i-1]>1)
            {
                if(nums[i-1]==st)
                {
                    ans.push_back(to_string(st));
                }
                else
                {
                    string temp = to_string(st) ;
                    temp += "->" ;
                    temp += to_string(nums[i-1]) ;
                    ans.push_back(temp) ;
                }
                if(i < nums.size())
                    st = nums[i] ;
            }
        }
        return ans ;
    }
};