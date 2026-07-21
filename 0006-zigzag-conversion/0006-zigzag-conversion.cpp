class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
            return s ;
        vector<string> rows(numRows);
        int i = 0 , curRow = 0;
        bool increas = true ;
        while(i < s.size())
        {
            rows[curRow].push_back(s[i]);
            if(curRow == numRows-1)
                increas = false;

            if(increas)
                curRow++;
            else
                curRow--;

            if(curRow==0)
                increas = true ;
            i++;
        }
        string ans = "" ;
        for(string & str : rows)
            ans += str ;
        return ans ;
    }
};

