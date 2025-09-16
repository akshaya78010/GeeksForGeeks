class Solution {
  public:
    string eval(string num1,string num2,string symbol){
        int res = 0;
        if(symbol == "+"){
            res = (stoi(num1) + stoi(num2));
        }
        else if(symbol == "-"){
            res = (stoi(num1) - stoi(num2));
        }
        else if(symbol == "*"){
            res = stoi(num1) * stoi(num2);
        }
        else if(symbol == "/"){
            res = floor(stoi(num1)*1.0/stoi(num2));
        }
        else if(symbol == "^"){
            res = pow(stoi(num1),stoi(num2));
        }
        
        string result = to_string(res);
        
        return result;
    }
    
    bool isnum(string s){
         try {
        size_t pos;
        stod(s, &pos);       
        return pos == s.length(); 
    } catch (...) {
        return false;
    }
    }
    int evaluatePostfix(vector<string>& arr) {
        // code here
        int n = arr.size();
        stack<string>st;
        
        for(int i =0; i < n ; i++){
            if(!isnum(arr[i])){
                string symbol = arr[i];
                string num1 = st.top();
                st.pop();
                string num2 = st.top();
                st.pop();
                
                string res = eval(num2,num1,symbol);
                
                st.push(res);
            }
            else{
                st.push(arr[i]);
            }
        }
        
      int result = stoi(st.top());
      
      return result;
    }
};