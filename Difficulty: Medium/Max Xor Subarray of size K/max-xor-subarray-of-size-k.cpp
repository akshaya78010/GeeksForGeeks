class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int maxi = arr[0];
        int xori = maxi;
        
        for(int i = 1; i < k ; i++){
            xori ^= arr[i];
        }
        
        maxi = xori;
        int x = 0;
        for(int i = k ; i < n ; i++){
            xori = xori ^ arr[x++];
            xori ^= arr[i];
            maxi = max(maxi,xori);
        }
        
        return maxi;
    }
};