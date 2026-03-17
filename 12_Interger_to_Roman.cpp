class form{
public:
    int style[4];
    int size;
    int level;
    form(int level,int num) {
        level=level;
        switch(num){
            case 0:
            {
                size=1;
                style[0] = 2*(level+1);
                break;
            }
            case 1:
            {
                size=1;
                style[0] = level;
                break;
            }
            case 2:
            {
                size=2;
                style[0] = level;
                style[1] = level;
                break;
            }
            case 3:
            {
                size=3;
                style[0] = level;
                style[1] = level;
                style[2] = level;
                break;
            }
            case 4:
            {
                size=2;
                style[0] = level;
                style[1] = level+1;
                break;
            }
            case 5:
            {
                size=1;
                style[0] = level+1;
                break;
            }
            case 6:
            {
                size=2;
                style[0] = level+1;
                style[1] = level;
                break;
            }
            case 7:
            {
                size=3;
                style[0] = level+1;
                style[1] = level;
                style[2] = level;
                break;
            }
            case 8:
            {
                size=4;
                style[0] = level+1;
                style[1] = level;
                style[2] = level;
                style[3] = level;
                break;
            }
            case 9:
            {
                size=2;
                style[0] = level;
                style[1] = level+2;
                break;
            }
        }
    }
};

class Solution {
private:
    char roman[7] = {'I','V','X','L','C','D','M'};
public:
    string intToRoman(int num) {
        int k=num;
        int level=0;
        string result = "";
        while(k>0)
        {
            string t="";
            if(k%10==0) {k/=10;level++; continue;}
            form* temp = new form(level*2,k%10);
            k/=10;
            for(int i=0;i<temp->size;i++)
            {
                t = t + roman[temp->style[i]];
            }
            level++;
            result = t+ result;
        }
        return result;
    }
};