class Solution {
public:
    string createStr(int l,int r,int charCount,int maxWidth,vector<string>&words,bool isLast=false)
    {
        int spaceCount = maxWidth-charCount ;
        string ans = "" ;
        for(int i = l ; i < r ; i++)
        {
            int x = spaceCount ;
            if(r-i > 1)
            {
                x = (spaceCount+(r-i-2))/(r-i-1) ;
            }
            ans += words[i] ;
            if(i+1 < r)
                ans += ' ' ;
            if(!isLast)
            {
                for(int j = 0 ; j < min(x,spaceCount) ;j++)
                    ans += ' ' ;
                spaceCount -= x ;
            }
        }
        if(isLast)
        {
            while(spaceCount--)
                ans += ' ' ;
        }
        return ans ;
    }
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int l = 0 , charCount = 0 ;
        vector<string> ans ;
        for(int i = 0 ; i < words.size(); i++)
        {
            if(charCount+words[i].size()+(l!=i) <= maxWidth)
            {
                charCount += words[i].size() + (l!=i) ;
            }
            else
            {
                // cout << l << ':' << i << '\n' ;
                ans.push_back(createStr(l,i,charCount,maxWidth,words));
                l = i;
                charCount = words[i].size() ;
            }
        }
        ans.push_back(createStr(l,words.size(),charCount,maxWidth,words,true)) ;
        return ans ;
    }
};
