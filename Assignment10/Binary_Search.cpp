class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0; int high=n;
        while(low<high)
        {
            int mid=(low+high-1)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(target<nums[mid])
            {
                high=mid;
            }
            else
            {
                low=mid+1;
            }
            
        }
        return -1;
        
    }
};
