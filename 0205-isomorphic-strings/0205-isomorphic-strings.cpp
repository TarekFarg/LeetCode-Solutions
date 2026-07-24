class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp ;
        set<char> st ;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(mp.count(t[i]))
            {
                if(s[i] != mp[t[i]])
                    return false ;
            }
            else
            {
                if(st.count(s[i]))
                    return false ;
                st.insert(s[i]);
                mp[t[i]] = s[i] ;
            }
        }
        return true ;
    }
};