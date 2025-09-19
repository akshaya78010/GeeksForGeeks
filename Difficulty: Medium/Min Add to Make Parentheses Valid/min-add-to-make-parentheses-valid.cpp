class Solution {
  public:
   bool check(char ch1,char ch2){
       if(ch1 == '(' && ch2 == ')')
       {
           return true;
       }
       return false;
   }
    int minParentheses(string& s) {
        // code here
        int n = s.size();
        stack<char>st;
        
        st.push(s[0]);
        
        char top;
        int x = 1;
        int county = 0;
       
       while(x < n){
           
           if(st.size() && check(st.top(),s[x])){
               st.pop();
               x+=1;
           }
          else
          {
              st.push(s[x]);
              x+=1;
          }
       }
        
        county = st.size();
        return county;
    }
};