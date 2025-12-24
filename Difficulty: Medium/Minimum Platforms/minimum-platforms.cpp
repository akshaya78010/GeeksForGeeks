class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
       vector<int>res(2500,0);
       
       for(int i = 0; i < arr.size() ; i++){
           res[arr[i]] += 1;
           res[dep[i] + 1] -= 1;
       }
       
       for(int i = 1 ; i < res.size() ; i++){
           res[i] = res[i-1] + res[i];
       }
       
       int maxi = INT_MIN;
       
       for(int i = 1 ; i < res.size() ; i++){
           maxi = max(maxi,res[i]);
       }
       
       return maxi;
    }
};
