class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        
        int sumi = 0;
        for(int i =0; i < k ; i++){
            sumi += arr[i];
        }
        
        int maxi = sumi;
        int x = 0;
        for(int i = k ; i < n ; i++){
            sumi -= arr[x++];
            sumi += arr[i];
            maxi = max(maxi,sumi);
        }
        
        return maxi;
    }
};