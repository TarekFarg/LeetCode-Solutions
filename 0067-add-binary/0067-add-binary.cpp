class Solution {
public:
    string addBinary(string a, string b) {
        bool last = false;
        
        string ans ;
        while(!a.empty() || !b.empty())
        {
            int sum = 0 ;
            if(!a.empty())
            {
                sum += a.back() == '1' ;
                a.pop_back() ;
            }
            if(!b.empty())
            {
                sum += b.back() == '1' ;
                b.pop_back() ;
            }
            sum += last ;

            if(sum%2==0)
                ans += '0' ;
            else
                ans += '1' ;
            
            last = (sum>1) ;
        }
        if(last)
            ans += '1' ;
        reverse(ans.begin() ,ans.end()) ;
        return ans ;
    }
};