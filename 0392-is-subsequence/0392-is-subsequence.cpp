class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pointer = 0 ;
        for(int i = 0 ; i < t.size() ; i++)
        {
            if(s[pointer] == t[i])
            {
                pointer++ ;
            }
            if(pointer >= s.size())
                break ;
        }
        return (pointer >= s.size()) ;
    }
};