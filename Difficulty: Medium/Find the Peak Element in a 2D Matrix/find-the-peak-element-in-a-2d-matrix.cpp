class Solution {
  public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        // code here
        int top,bottom,left,right,num = INT_MAX;
        
        int ind1,ind2 = -1;
        vector<int>res;
        for(int i =0; i < mat.size() ; i++){
            
            top,bottom,left,right,num = INT_MAX;
            ind1 = i;
            ind2 = -1;
            for(int j = 0; j < mat[i].size() ; j++){
                num = mat[i][j];
                if(i > 0){
                    top = mat[i-1][j];
                }
                else{
                    top = INT_MIN;
                }
                
                if(j > 0){
                    left = mat[i][j-1];
                }
                else{
                    left = INT_MIN;
                }
                
                if(j < mat[i].size() - 1){
                    right = mat[i][j+1];
                }
                else{
                    right = INT_MIN;
                }
                
                if(i < mat.size() - 1){
                    bottom = mat[i+1][j];
                }
                else
                {
                    bottom = INT_MIN;
                }
                
                if(num >= top && num >= bottom && num >= left && num >= right){
                ind2 = j;
                }
                
                if(ind2 != -1){
                    break;
                }
            }
            
            if(ind1 != -1 && ind2 != -1){
                res.push_back(ind1);
                res.push_back(ind2);
            }
            
            if(!res.empty()){
                break;
            }
        }
        
        return res;
    }
};
