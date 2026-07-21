class Solution {
public:
    string reverseWords(string s) {
        vector<string> vec ;
        string cur = "" ;
        for(char c : s)
        {
            if(c == ' '){
                if(!cur.empty())
                    vec.push_back(cur) ;
                cur = "" ;
            }
            else
                cur += c ;
        }
        if(!cur.empty())
            vec.push_back(cur) ;
        
        string ans = "" ;
        for(int i = vec.size()-1 ; i >= 0 ; i--)
        {
            ans += vec[i];
            if(i != 0)
                ans += " " ;
        }
        return ans ;
    }
};