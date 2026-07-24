class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> str1(26) , str2(26) ;
        for(char ch : ransomNote)
            str1[ch-'a']++ ;

        for(char ch : magazine)
            str2[ch-'a']++ ;

        for(int i = 0 ; i < 26 ; i++)
        {
            if(str1[i] > str2[i])
                return false ;
        }    
        return true ;
    }
};