class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,vector<int>> mp ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            mp[nums[i]].push_back(i);
        }
        for(auto [num,vec]:mp)
        {
            for(int i = 1 ; i < vec.size() ; i++)
            {
                if(vec[i]-vec[i-1] <= k)
                    return true ;
            }
        }
        return false;
    }
};