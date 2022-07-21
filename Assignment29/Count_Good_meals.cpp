class Solution {
public:
    long Mod= 1000000007;
    int countPairs(vector<int>& deliciousness) {
        unordered_map<int,int>mp;
        int n=0;
        for(int i=0; i<deliciousness.size(); i++)
        {
            int p=1;
            for(int j=0; j<=21; j++)
            {
                int q=p-deliciousness[i];
                if(mp.find(q)!=mp.end())
                {
                    n=n+mp[q];
                    n=n%Mod;
                }
                p=p*2;
            }
            mp[deliciousness[i]]++;
        }
        return n;
        
    }
};
