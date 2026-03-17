class Solution {
public:
    bool isValid(string s) {
        string save="";
        if(s.size()%2==1) return false;

        for(unsigned int i=0;i<s.size();i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                save = save+s[i];
            }
            else
            {
                if(save.size()==0) return false;
                if(s[i]==')' && save[save.size()-1] == '(') save.pop_back();
                else if(s[i]==']' && save[save.size()-1] == '[') save.pop_back();
                else if(s[i]=='}' && save[save.size()-1] == '{') save.pop_back();
                else return false;

            }
        }
        if(save.size()!=0) return false;
        return true;
    }
};