class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        
        deque<int>dq;
        
        vector<int>res;
        
        for(int i = 0; i < k ; i++){
            
            while(!dq.empty() && arr[dq.back()] <= arr[i]){
                dq.pop_back();
            }
            
            dq.push_back(i);
        }
        
        for(int i = k-1 ; i < arr.size() ; i++){
            
            while(!dq.empty() && dq.front() <= i-k){
                dq.pop_front();
            }
            
            while(!dq.empty() && arr[dq.back()] <= arr[i]){
                dq.pop_back();
            }
            
            dq.push_back(i);
            
            res.push_back(arr[dq.front()]);
        }
        
        return res;
    }
};