class Solution {
  public:
    int minOperation(int n) {
        // code here
        
        int op = 0;
        
        while(n){
            if(n%2 != 0){
            op += 1;
            n-=1;
            continue;
        }
            n = n/2;
            
            op+=1;
        }
        
        return op;
    }
};