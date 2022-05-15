class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int min;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
             for(int j=i-1;j>=0;j--)
        {
            if(nums[j]>nums[j+1])
            {
                swap(nums[j+1],nums[j]);
            }
        }
        }
        return nums;
    }
};
