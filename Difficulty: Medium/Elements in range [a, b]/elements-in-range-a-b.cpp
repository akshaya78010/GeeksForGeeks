class Solution {
  public:
    vector<int> cntInRange(vector<int> &arr, vector<vector<int>> &queries) {
        // code here
        sort(arr.begin(),arr.end());
        
        auto it1 = arr.end();
        auto it2 = arr.end();
        vector<int>res;
        for(int i =0; i < queries.size() ; i++){
            it1 = lower_bound(arr.begin(),arr.end(),queries[i][0]);
            it2 = upper_bound(arr.begin(),arr.end(),queries[i][1]);
                res.push_back(distance(it1,it2));
        }
        
        return res;
    }
};