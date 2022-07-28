class Solution {
public:
     void FindSum(vector<vector<int>> &ans, vector<int> &A, vector<int> &B, int t, int j)
    {
        if(t<0)
        {
            return; 
        }
        else if(t==0)
        {
            ans.push_back(A);
        }
        else
        {
            int x=0;
            for(int i=j; i<B.size(); i++)
            {
                if(x!=B[i])
                {
                    A.push_back(B[i]);
                    FindSum(ans, A, B, t-B[i], i+1);
                    x=B[i];
                    A.pop_back();
                }
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>A;
        sort(candidates.begin(), candidates.end());
        FindSum(ans, A, candidates, target, 0);
        return ans;
        
    }
};
