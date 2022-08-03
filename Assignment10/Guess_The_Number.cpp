/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long int high=n;
        long long int low=0;
        if(guess(n)==0)
        {
            return n;
        }
        while(low<high)
        {
            long long int mid=(low+high)/2;
            if(guess(mid)==0)
            {
                return mid;
            }
            if(guess(mid)==1)
            {
                low=mid+1;
            }
            else
            {
                high=mid;
            }
        }
        return 0;
        
    }
};
