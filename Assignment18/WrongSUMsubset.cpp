class Solution {
public:
    void recursion(vector<int>A, vector<vector<int>>B, int i, int sum, vector<int>n, int target)
    {
        if(i==n.size())
        {
            return;
        }
        sum=sum+n[i];
        
        if(sum<target)
        {
            recursion(A, B, i+1, sum, n, target);
            A.push_back(n[i]);
        }
        if(target==sum)
        {
            for(int j=i; j>=0; j++)
            {
                A.push_back(n[j]);
            }
            B.push_back(A);
            while(n[i]==n[i+1])
            {
                i++;
            }
        }
        if(target>sum)
        {
            A.pop_back();
            recursion(A, B, i+1, sum, n, target);
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>B;
        vector<int>A;
        int min;
        int n=candidates.size();
        for(int i=0;i<n-1;i++)
        {
            min=i;
            for(int j=i+1;j<n;j++)
            {
                if(candidates[min]>candidates[j])
                {
                    min=j;        
                }
            }
            swap(candidates[min],candidates[i]);   
        }
        recursion(A, B, 0, 0, candidates, target);
        return B;
        
    }
};
