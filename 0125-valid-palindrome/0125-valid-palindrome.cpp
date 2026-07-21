class Solution {
public:
    bool isPalindrome(string s) {
        string newStr ;
        for(char ch : s)
        {
            if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ch >= '0' && ch <= '9')
                newStr += tolower(ch) ;
        }
        int l = 0 , r = newStr.size()-1 ;
        while(l<r)
        {
            if(newStr[l] != newStr[r])
                return false;
            l++ ;
            r--;
        }
        return true ;
    }
};