class Solution {
public:
    int minSteps(int n) {
        if(n<=1)
            return 0;
        int i, ans=0;
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            ans=ans+i;
            n=n/i;
        }
    }
    
    return ans;
        
    }
};
