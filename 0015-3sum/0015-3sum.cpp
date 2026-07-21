class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ;
        vector<vector<int>> ans ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue ;
            int l = i+1 , r = nums.size()-1 , sum = -nums[i] ;
            while(r>l)
            {
                if(nums[l]+nums[r] > sum)
                    r-- ;
                else if(nums[l]+nums[r] < sum)
                    l++ ;
                else
                {
                    vector<int> cur = {nums[i],nums[l],nums[r]} ;
                    if(ans.empty() || ans.back()!= cur)
                        ans.push_back(cur) ;
                    r--;
                    l++;
                }
            }
        }
        return ans ;
    }
};