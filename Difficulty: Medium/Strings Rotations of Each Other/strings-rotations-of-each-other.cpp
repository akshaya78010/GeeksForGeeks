class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
        string str1 = s2;
        string str = s1;
        
        sort(str1.begin(),str1.end());
        sort(str.begin(),str.end());
        
        if(str != str1){
            return false;
        }
        
        char temp;
        int n = s1.size() + 1;
        while(n--){
            if(s1 == s2){
                return true;
            }
            temp = s2[0];
            s2.erase(0,1);
            s2 += temp;
        }
        
        return false;
    }
};