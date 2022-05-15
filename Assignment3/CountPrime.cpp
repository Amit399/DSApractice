class Solution {
public:
    int countPrimes(int n) {
        if(n<3)
            return 0;
        int count=0;
        bool prime[n];
        for(int i=2;i<n;i++)
            prime[i]=true;
        for(int i=2; i*i<n; i++)
        {
                for(int j=i*i; j<n; j=j+i)
                    prime[j]=false;
        }
        for(int i=2; i<n;i++)
        {
            if(prime[i])
                count=count+1;
        }
        return count;
        
    }
};
