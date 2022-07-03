class Solution {
public:
    void recursion(vector<int> &A, vector<vector<int>> &B, int i, vector<int>n)
    {
        if(i==n.size())
        {
            B.push_back(A);
            return;
        }
        recursion(A, B, i+1, n);
        A.push_back(n[i]);
        recursion(A, B, i+1, n);
        A.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>B;
        vector<int>A;
        recursion(A, B, 0, nums);
        return B;
        
    }
};
