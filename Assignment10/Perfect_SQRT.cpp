class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int high=x;
        long long int a=0;
        if(x==1)return 1;
        while(low<high)
        {
            long long int mid=(low+high)/2;
            if(mid*mid==x)
            {
                return mid;
            }
            else if(mid*mid<x)
            {
                a=mid;
                low=mid+1;
            }
            else
            {
                high=mid;
            }
            
        }
        return a;
        
    }
};
