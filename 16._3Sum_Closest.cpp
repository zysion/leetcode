class Solution {
public:

    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int result = nums[0] + nums[1] + nums[2];

        int i=0;
        while(i<nums.size())
        {
            int l=i+1,r=nums.size()-1;
            while (l<r)
            {
                int total = nums[i]+nums[l]+nums[r];
                if(total == target) return total;
                else if(abs(total-target) < abs(result-target)) result = total;
                
                if(total<target) l++;
                else r--;
            }
            i++;
        }
        return result;
    }
};
