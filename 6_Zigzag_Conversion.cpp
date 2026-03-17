class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        string result=s;
        int i=0,j=0,l=numRows-1;
        int count=0;
        while(count!=s.size())
        {
            result[count]=s[i];
            i=i+l*2;
            count++;
            if(j!=0 && j!=numRows-1) l=numRows-1-l;
            if(i>=s.size()) {
                j++;i=j;
                if(j!=numRows-1) l=numRows-1-j;
                else l=numRows-1;
            }
        }
        return result;
        
    };
};