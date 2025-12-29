class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        int i =0 ;
        int j = 0;
        int n = a.size();
        int n1 = b.size();
        int num = -1;
        while(k){
            
            while(k > 0 && i < n && j < n1){
                if(a[i] <= b[j]){
                    num = a[i++];
                }
                else
                {
                    num = b[j++];
                }
                k-=1;
            }
            
            while(k > 0 && i < n){
                num = a[i++];
                k-=1;
            }
            
            while(k > 0 && j < n1){
                num = b[j++];
                k-=1;
            }
        }
        
        return num;
    }
};