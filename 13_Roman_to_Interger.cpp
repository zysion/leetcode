class Solution {
public:
    int getvalue(char x)
    {
        if(x=='I') return 1;
        if(x=='V') return 5;
        if(x=='X') return 10;
        if(x=='L') return 50;
        if(x=='C') return 100;
        if(x=='D') return 500;
        if(x=='M') return 1000;
        return -1;
    }
    bool compare(int x, char y)
    {
        if(x<getvalue(y)) return false;
        return true;
    }
    int romanToInt(string s) {
        int value = getvalue(s[s.size()-1]);
        for(int i=s.size()-2;i>=0;i--)
        {
            int k=getvalue(s[i]);
            if(!compare(k,s[i+1])) value-=k;
            else value+=k;
        }
        return value;
    }
};