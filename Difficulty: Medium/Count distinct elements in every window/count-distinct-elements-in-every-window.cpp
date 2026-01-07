class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        
        map<int,int>mpp;
        
        int n = arr.size();
        for(int i = 0 ; i < k ; i++){
            mpp[arr[i]] += 1;
        }
        
        vector<int>res;
        int x = 0;
        for(int i = k ; i < n ; i++){
            mpp[arr[x]]-=1;
            res.push_back(mpp.size());
            
            mpp[arr[i]]+=1;
            if(mpp[arr[x]] == 0){
                mpp.erase(arr[x]);
            }
            x+=1;
        }
        
        res.push_back(mpp.size());
        
        return res;
    }
};