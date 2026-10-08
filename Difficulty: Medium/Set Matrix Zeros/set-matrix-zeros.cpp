// User function Template for C++
class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        vector<int>row;
        vector<int>col;
        for(int i =0; i < mat.size() ; i++)
        {
            for(int j =0; j < mat[0].size() ; j++)
            {
                if(mat[i][j] == 0)
                {
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        for(int i =0; i < row.size() ; i++)
        {
            for(int  j =0; j < mat[0].size() ; j++)
            {
                mat[row[i]][j] =0;
            }
        }
       for(int j =0 ; j < col.size() ; j++)
            {
                 for(int i =0 ;i < mat.size() ; i++)
        {
            mat[i][col[j]] =0;
            }
        }
    }
};
