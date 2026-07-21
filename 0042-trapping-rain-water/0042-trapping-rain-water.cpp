class Solution {
public:
    int trap(vector<int>& height) {
        multiset<int> st;
        for(int i : height)
            st.insert(i);
        int last = -1 ;
        int ans = 0 ;
        for(int i : height)
        {
            st.erase(st.find(i));
            if(last <= i || st.empty())
            {
                last = i ;
                continue;
            }
            int mx = *st.rbegin();
            if(mx > i){
                ans += min(mx,last)-i ;
                last = min(mx,last) ; 
            }
            else
                last = i;
        }
        return ans ;
    }
};