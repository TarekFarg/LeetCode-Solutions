class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int rem = target - nums[i] ;
            if(mp.count(rem))
                return {i,mp[rem]} ;

            if(mp.count(nums[i]))
            {
                if(target == nums[i]*2)
                    return {i,mp[nums[i]]} ;
            }
            else
                mp[nums[i]] = i  ;
            
        }
        return{0,1};
    }
};