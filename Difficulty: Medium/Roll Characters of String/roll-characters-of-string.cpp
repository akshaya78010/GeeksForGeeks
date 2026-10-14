class Solution {
  public:
    string findRollOut(string& s, vector<int>& roll) {
        // code here
        int n = s.size();
        vector<int>prefix(n+2,0);
        
        for(int i =0 ; i < roll.size() ; i++){
            prefix[0] += 1;
            if(roll[i]+1 < n+2)
            prefix[roll[i]] -= 1;
        }
        
       
        
        for(int i = 1 ; i < prefix.size() ; i++){
            prefix[i] = prefix[i-1] + prefix[i];
        }
        
        //  for(int i = 0 ; i <prefix.size() ; i++){
        //     cout<<prefix[i]<<" ";
        // }
        

        // cout<<'\n';
        
        int temp = 0;
        for(int i = 0; i < s.size() ; i++){
            
            temp = s[i] - 'a';
            // cout<<"1:"<<temp<<'\n';
            temp = temp + prefix[i];
            //  cout<<"2:"<<temp<<" "<<prefix[i+1]<<'\n';
            temp = temp%26;
            // cout<<"3:"<<temp<<'\n';
            temp = temp + 'a';
            // cout<<"4:"<<temp<<'\n';
            s[i] = (char)temp;
        }
        
        return s;
    }
};
