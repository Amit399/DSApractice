class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int>C(n+1);
        for(auto a: nums)
        {
            C[a]++;
        }
        for(int i=0; i<C.size(); i++)
        {
            if(C[i]==0)
            {
                return i;
            }
        }
        return 0;
        
    }
};
