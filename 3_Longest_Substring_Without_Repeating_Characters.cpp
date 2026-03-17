class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="") return 0;
        set<char> save;
        int start=0;
        unsigned int result=1;
        for(unsigned int i=0;i<s.size();i++)
        {
            if(save.find(s[i])==save.end())
            {
                save.insert(s[i]);
            }
            else
            {
                unsigned temp=save.size();
                if(result<temp) result=temp;
                while(start<i && s[i]!=s[start])
                {
                    save.erase(s[start]);
                    start++;
                }
                save.insert(s[i]);
                start++;
            }
        }
        unsigned temp=save.size();
        if(result<temp) result=temp;
        return result;
    }
};