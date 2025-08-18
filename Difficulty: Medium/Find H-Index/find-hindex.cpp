class Solution {
  public:
    int hIndex(vector<int>& citations) {
        // code here
        sort(citations.begin(),citations.end());
        
        int n = citations.size();
        sort(citations.begin(),citations.end());
        
        reverse(citations.begin(),citations.end());
        
        int res = 1;
        
        for(int i =0; i < citations.size() ; i++){
            res = i+1;
            
            if(res  > citations[i])
            {
                res -=1;
                break;
            }
        }
        
        return res;
    }
};