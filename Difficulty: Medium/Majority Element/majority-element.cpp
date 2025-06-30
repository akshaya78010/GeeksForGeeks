class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        map<int,int>mpp;
        
        for(int i =0; i < arr.size() ; i++)
        {
            mpp[arr[i]] += 1;
        }
        
        int ele = -1;
        for(auto it = mpp.begin() ; it != mpp.end() ; it++)
        {
            if(it->second > (arr.size()/2))
            {
            ele = it->first;
            break;
            }
        }
        
        
        return ele;
    }
};