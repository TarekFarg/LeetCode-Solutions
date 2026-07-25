class Solution {
    void split_str(string & s , vector<string> & words)
    {
        string cur = "" ;
        for(char ch : s)
        {
            if(ch==' ')
                words.push_back(cur) , cur = "" ;
            else
                cur += ch ;
        }
        if(!cur.empty())
            words.push_back(cur) ;
    }
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> mp ;
        set<string> st ;
        vector<string> words ;
        split_str(s,words);
        
        if(words.size() != pattern.size())
            return false ;

        for(int i = 0 ; i < pattern.size() ; i++ )
        {
            string cur = words[i] ;
            if(mp.count(pattern[i]))
                cur = mp[pattern[i]] ;
            if(cur != words[i])
                return false ;
            
            if(!mp.count(pattern[i]) && st.count(words[i]))
                return false ;

            st.insert(words[i]);
            mp[pattern[i]] = words[i] ;
        }
        return true;
    }
};