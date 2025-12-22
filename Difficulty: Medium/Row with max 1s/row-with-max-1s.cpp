// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int maxi = 0;
        int max_ind = -1;
        int county = 0;
        
        for(int i =0; i < arr.size() ; i++){
            county = 0;
            for(int j =0; j < arr[i].size() ; j++){
             if(arr[i][j] == 1){
                 county += 1;
             }   
            }
            
            if(county > maxi){
                maxi = county;
                max_ind = i;
            }
        }
        
       return max_ind; 
    }
};