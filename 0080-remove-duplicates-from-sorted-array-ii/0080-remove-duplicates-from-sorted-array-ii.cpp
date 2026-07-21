class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp ;
        for(int i = 0 ; i<nums.size() ;i++)
        {
            if(i-2>=0)
            {
                if(nums[i]==nums[i-1] && nums[i]==nums[i-2])
                    continue;
            }
            temp.push_back(nums[i]) ;
        }
        for(int i = 0 ; i<temp.size();i++)
            nums[i] = temp[i] ;
        return temp.size() ;
    }
};