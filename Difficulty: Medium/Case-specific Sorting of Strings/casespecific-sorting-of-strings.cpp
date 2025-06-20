class Solution {
  public:
    string caseSort(string& s) {
        // code here
        string str = s;
        sort(str.begin(),str.end());
        // return str;
        int x =0;
        int county =0;
        for(int i =0; i < s.size() ; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = str[x++];
                county+=1;
            }
        }
        
        x =county;
        // cout<<x<<" ";
        for(int i =0; i < s.size() ; i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = str[x++];
            }
        }
        
        return s;
    }
};