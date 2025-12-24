class Solution {
  public:
    vector<int> countXInRange(vector<int>& arr, vector<vector<int>>& queries) {
        // code here
        int l,r,x,dist;
        vector<int>res;
        auto it1 = arr.end();
        auto it2 = arr.end();
        
        for(int i =0; i < queries.size() ; i++){
         
         dist = 0;
         
         it1 = lower_bound(arr.begin() + queries[i][0],arr.begin() + queries[i][1] + 1,queries[i][2]);
         it2 = upper_bound(arr.begin() + queries[i][0],arr.begin() + queries[i][1] + 1,queries[i][2]);
         
         if(it1 != arr.end()){
             dist = distance(it1,it2);
         }
         res.push_back(dist);
        }
        
        return res;
    }
};