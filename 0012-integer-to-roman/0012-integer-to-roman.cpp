class Solution {
public:
    string intToRoman(int num) {
        vector<string> mp {
            "I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM","M"
        };
        vector<int> vec {
            1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000, 10000
        } ;
        string ans ="" ;
        while(num > 0)
        {
            int in = upper_bound(vec.begin(),vec.end(),num) - vec.begin() -1 ;
            ans += mp[in] ;
            num -= vec[in] ;
        }
        return ans ;
    }
};