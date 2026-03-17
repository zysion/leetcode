class Solution {
public:
    string getsubstring(string s,int l,int r)
    {
        return s.substr(l,r);
    }
    string longestCommonPrefix(vector<string>& strs) {
        string k=strs[0];
        int r=1,l=0;
        string result = "";
        while(r<=k.size())
        {
            int w=0;
            string temp=getsubstring(strs[0],0,r);
            for(int j=1;j<strs.size();j++)
            {
                if(temp != getsubstring(strs[j],0,r)) {w=1;break;}
            }
            if(w==0)
            {
                result=temp;
            }
            else break;
            r++;
        }
        return result;
    }
};