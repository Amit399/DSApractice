class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        int max = *max_element(nums.begin(), nums.end());
        int min = *min_element(nums.begin(), nums.end());
        int range=max-min+1;
        vector<int>a(range,0);
        vector<int>c(n,0);
        for(int i=0; i<nums.size(); i++)
        {
            a[nums[i]-min]++;
        }
        for(int i=1; i<range; i++)
        {
            a[i]=a[i]+a[i-1];
        }
        for(int i=n-1; i>=0; i--)
        {
            c[a[nums[i] - min] - 1] = nums[i];
            a[nums[i] - min]--;
        }
        return c;
        
    }
};
