// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        
        int n = arr.size();
        int county = 0;
        int maxi = INT_MIN;
        int ind = -1;
        for(int i =0; i < arr.size() ; i++)
        {
            county = 0;
            for(int j =0; j < arr[i].size() ; j++)
            {
                if(arr[i][j] == 1)
                {
                    county += 1;
                }
            }
           if(county > maxi)
           {
               maxi = county;
               ind = i;
           }
        }
        
        return ind;
    }
};