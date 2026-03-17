class Solution {
public:

    // int getreverse(int x)
    // {
    //     int r=0;
    //     while(x!=0)
    //     {
    //         r=r*10+x%10;
    //         x/=10;
    //     }
    //     return r;
    // };
    std::string converse(std::string s)
    {
        std::string r="";
        for(int i=s.size()-1;i>=0;i--)
        {
            r=r+s[i];
        }
        return r;
    };

    bool isPalindrome(int x) {
        if(x<0) return false;
        // if(x == getreverse(x)) return true;
        std::stringstream s;
        s<<x;
        std::string str = s.str();
        if(str==converse(str)) return true;
        return false;
    };


};