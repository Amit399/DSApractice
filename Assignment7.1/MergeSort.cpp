class Solution {
public:
    void merge(vector<int>& nums, int strt, int mid, int end){
    vector<int>c;
	int i=strt, j=mid+1;
	while (i<=mid && j<= end) {
		if (nums[i]<=nums[j]) {
			c.push_back(nums[i]);
			i++;
		}
		else {
			c.push_back(nums[j]);
			j++;
		}
	}
	while (i<=mid) {
		c.push_back(nums[i]);
		i++;
	}
	while (j<=end) {
		c.push_back(nums[j]);
		j++;
	}
	for (int i=strt; i<=end; ++i)
		nums[i]=c[i - strt];
}

void sort(vector<int>& nums, int strt, int end) {
	if (strt < end) {
		int mid = (strt + end) / 2;
		sort(nums, strt, mid);
		sort(nums, mid + 1, end);
        merge(nums,strt,mid,end);
	}
}
    vector<int> sortArray(vector<int>& nums) {
        
        int n=nums.size();
        sort(nums,0,n-1);
        return nums;
    }
};
