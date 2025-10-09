class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int low = 0;
        int high = n;
        int res;
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        if(mid * mid > n){
            high = mid - 1;
        }
        else if(mid * mid <= n){
         res = mid;
         low += 1;
        }
    }
    
    return res;
    }
};