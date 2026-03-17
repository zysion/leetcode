class Solution {
public:

    double medianforoddarray(vector<int>& nums1, vector<int>& nums2,int place){
        int i=0,j=0;
        int count=0;
        int re=0;
        while(i<nums1.size() || j<nums2.size())
        {
            if(i>=nums1.size())
            {
                re=nums2[j];
                j++;
            }
            else if(j>=nums2.size())
            {
                re=nums1[i];
                i++;
            }
            else if(nums1[i]<nums2[j])
            {
                re=nums1[i];
                i++;
            }
            else
            {
                re=nums2[j];
                j++;
            }
            if(count==place) break;
            count++;
        }
        return double(re);
    };

    double medianforevenarray(vector<int>& nums1,vector<int>& nums2,int r,int l)
    {
        int i=0,j=0;
        int count=0;
        int a=0,b=0;
        int* c=&a;
        while(i<nums1.size() || j<nums2.size())
        {
            if(i>=nums1.size())
            {
                *c=nums2[j];
                j++;
            }
            else if(j>=nums2.size())
            {
                *c=nums1[i];
                i++;
            }
            else if(nums1[i]<nums2[j])
            {
                *c=nums1[i];
                i++;
            }
            else
            {
                *c=nums2[j];
                j++;
            }
            if(count==l) c=&b;
            if(count==r) break;
            count++;
        }
        double result=static_cast<double>(a+b)/2;
        return result;
    };

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int number_digit= nums1.size() + nums2.size();
        int k=number_digit/2;
        if(number_digit%2==1) return medianforoddarray(nums1,nums2,k);
        return medianforevenarray(nums1,nums2,k,k-1);
    }
};