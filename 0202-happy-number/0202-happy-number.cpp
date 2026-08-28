class Solution {
    int calc(int n)
    {
        int sum = 0 ;
        while(n>0)
        {
            sum += pow(n%10,2) ;
            n /= 10 ;
        }
        return sum ;
    }
public:
    bool isHappy(int n) {
        set<int> st ;
        while(!st.count(n))
        {
            if(n==1)
                return true ;
            st.insert(n) ;
            n = calc(n);
        }
        return false;
    }
};
