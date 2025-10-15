class Solution {
  public:
    int longestUniqueSubstring(string &s) {
        // code
        map<char,int>mpp;
        
        int i = 0;
        int j = 0;
        int n = s.size();
        int longest = 0;
       while(j < n)
       {mpp[s[j]]+=1;
        //   longest = max(longest,(j-i+1));
           
               while(mpp[s[j]] > 1)
               {
                   mpp[s[i]]-=1;
                   i+=1;
               }
           
           
            longest = max(longest,(j-i+1));
           j+=1;
           
       }
       
       return longest;
    }
};