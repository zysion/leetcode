class Solution {
public:
    int maxArea(vector<int>& height) {
        unsigned int a=0,b=height.size()-1;
        int result=0;
        int temp_area=0;
        while(a<b)
        {
            temp_area = min(height[a],height[b]) * (b-a);
            if(temp_area > result)
            {
                result = temp_area;
            }
            if(height[a]<height[b]) a++;
            else b--;
        }
        return result;
    }
};