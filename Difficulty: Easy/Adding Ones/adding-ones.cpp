class Solution {
  public:
    vector<int> update(int n, vector<int>& updates) {
        // code here
        
        vector<int>res(n,0);
        
        for(int i = 0; i < updates.size() ; i++){
            res[updates[i]-1] += 1;
        }
        
        for(int i = 1; i < n ; i++){
            res[i] = res[i-1] + res[i];
        }
        
        return res;
    }
};