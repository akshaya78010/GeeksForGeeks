class Solution {
  public:
    vector<int> prefixSum2D(vector<vector<int>> &mat, vector<vector<int>> &queries) {
        // code here 
       vector<int>arr;
       int r1 = 0;
       int c1 = 0;
       int r2 = 0;
       int c2 = 0;
       int sumi = 0;
       
       
        for(int i=0 ; i < mat.size() ; i++)
            {
        for(int j = 0; j < mat[i].size() ; j++){
            if(i > 0){
                mat[i][j] += mat[i-1][j];
            }

            if(j > 0){
                mat[i][j] += mat[i][j-1];
            }

            if(i > 0 && j > 0){
                mat[i][j] -= mat[i-1][j-1];
            }
        }
    }
    
    
       for(int i = 0; i < queries.size() ; i++){
          sumi = 0;
          r1 = queries[i][0];
          c1 = queries[i][1];
          r2 = queries[i][2];
          c2 = queries[i][3];
          
          sumi += mat[r2][c2];
          
          if(r1 > 0){
              sumi -= mat[r1 - 1][c2];
          }
          
          if(c1 > 0){
              sumi -= mat[r2][c1 - 1];
          }
          
          if(r1 > 0 && c1 > 0){
              sumi += mat[r1 - 1][c1 - 1];
          }
          
          arr.push_back(sumi);
       }
       
       return arr;
    }
};
