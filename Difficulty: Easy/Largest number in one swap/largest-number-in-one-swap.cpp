class Solution {
  public:
    string largestSwap(string &s) {
        // code here
        string str = s;
        
        sort(str.rbegin(),str.rend());
        
        int n = s.size();
        int ind = 0;
        for(int i = 0; i < n ; i++)
        {if(str[i] != s[i]){
            ind = i;
            break;
        }}
        
        int maxi = INT_MIN;
        int idx = -1;
        for(int i = ind; i < n ; i++)
        {
            if(maxi <= (s[i] - '0')){
                maxi = s[i] - '0';
                idx = i;
            }
        }
        
        if(idx == -1){
            return s;
        }
        else
        {
            swap(s[ind],s[idx]);
        }
        
        return s;
    }
};