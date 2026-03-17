class Solution {
public:

    int binary_search(vector<int>&nums, int k,int l,int r)
    {
        int s=l,e=r;
        while(s<=e)
        {
            int middle = (s+e)/2;
            if(nums[middle]==k) return middle;
            else if(nums[middle]<k) s=middle+1;
            else e=middle-1;
        }
        return -1;
    }

    vector<int> change(int a,int b,int c)
    {
        vector<int> result;
        result.push_back(a);
        result.push_back(b);
        result.push_back(c);
        return result;
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        if(nums[0]>0 || nums[nums.size()-1]<0) return result;
        int zero = binary_search(nums,0,0,nums.size()-1);
        int n=0,p=0;
        if(zero!=-1)
        {
            n=zero-1;
            p=zero+1;
            if(n>=0){
            while(nums[n]==0 && n>=0)
            {
                n--;
                if(n<0) break;
            }}
            if(p<nums.size()) {
            while(nums[p]==0 && p<nums.size())
            {
                p++;
                if(p>=nums.size()) break;
            }
            }
            n++;p--;
            if(n<0 || p>=nums.size()) return result;
            if(p-n>=2) result.push_back(change(0,0,0));
        }

        for(int i=0;i<nums.size() && nums[i]<0;i++)
        {
            if(i!=0)
                {if (nums[i] == nums[i-1]) continue;}
            for(int j=nums.size()-1;j>=0 && nums[j]>0; j--)
            {
                if(j!=nums.size()-1) 
                    {if(nums[j] == nums[j+1]) continue;}
                int index = binary_search(nums,(nums[j]+nums[i])*(-1),i+1,j-1);
                if(index==-1) continue;
                else
                {
                    result.push_back(change(nums[i],nums[index],nums[j]));
                }
            }
        }
        return result;
    }
};