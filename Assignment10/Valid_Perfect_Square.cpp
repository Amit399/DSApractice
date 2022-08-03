class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=0;
        int high=num;
        if(num==1)
            return true;
        while(low<high)
        {
            long long int mid=(low+high)/2;
            if(mid*mid==num)
            {
                return true;
            }
            else if(mid*mid<num)
            {
                low=mid+1;
            }
            else
            {
                high=mid;
            }
            
        }
        return false;

    }
};
