class Solution {
  public:
    
    // int bin_sch(vector<vector<int>>&arr,int l,int h){
    //     int low = l;
    //     int high = h;
        
    //     int row = arr.size();
    //     int col = arr[0].size();
    //     while(low <= high){
    //         mid = low + (high - low)/2;
    //         row = mid/col;
    //         col = mid%col;
    //     }
    // }
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
       bool res = false;
       
       for(int i =0; i < mat.size() ; i++)
       {
           for(int j =0; j < mat[i].size() ; j++)
           {
               if(mat[i][j] == x){
                   res = true;
                   break;
               }
           }
       }
       
       return res;
    }
};
