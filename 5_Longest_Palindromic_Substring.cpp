class Solution {
public:
    string similar(string s,int k,int& l,int& r)
    {
        string temp=string(1,s[k]);
        while(l>=0 && s[l]==s[k])
        {
            temp=temp+s[k];
            l--;
        }
        while(r<s.size() && s[r]==s[k])
        {
            temp=temp+s[k];
            r++;
        }
        return temp;
    }
    string reverse(string s)
    {
        string r="";
        for(unsigned int i=0;i<s.size();i++)
        {
            r=s[i]+r;
        }
        return r;
    };
    string longestPalindrome(string s) {
        if(s=="" || s.size()==1) return s;
        string result= string(1,s[0]);
        int longest=1;
        int k=1;
        int l=0,r=0;
        while(k<s.size())
        {
            l=k-1;r=k+1;
            string temp=string(1,s[k]);
            if(s[l] == s[k] || s[r] == s[k]) temp=similar(s,k,l,r);
            int p=0;
            while(l>=0 && r<s.size() && s[l]==s[r])
            {
                p=1;
                temp = s[l] + temp + s[r];
                l--;
                r++;
            }
            if(temp.size() > result.size()) result=temp;
            if(p==0) k=r;
            else k++;
        }
        return result;
    };
};