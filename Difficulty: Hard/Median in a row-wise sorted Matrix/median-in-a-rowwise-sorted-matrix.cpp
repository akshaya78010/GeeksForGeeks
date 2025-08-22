class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        vector<int>arr;
        
        for(int i =0; i < mat.size() ; i++)

{
    for(int j =0; j < mat[i].size() ; j++)
    {
        arr.push_back(mat[i][j]);
    }
} 

sort(arr.begin(),arr.end());
        return arr[arr.size()/2];
    }
};
