class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l =0  , r = 0 , len = 0 ;
        map<char,bool> frq ;
        while(r < s.size())
        {
            while(frq[s[r]])
            {
                frq[s[l++]] = false ;
            }
            frq[s[r++]] = true ;
            len = max(len, r-l) ;
        }
        return len ;
    }
};