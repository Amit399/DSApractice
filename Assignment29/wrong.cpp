class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        unordered_map<int,int>A;
        for(auto a:deliciousness)A[a]++;
        int n=0;
        for(int i=0; i<deliciousness.size(); i++)
        {
            for(int j=0; j<=21; j++)
            {
                int p=pow(2,j);
                int q=p-deliciousness[i];
                if(A.find(q)!=A.end())
                {
                    n++;
                }
            }
            //A[deliciousness[i]]++;
        }
        return n/2;
    }
};
