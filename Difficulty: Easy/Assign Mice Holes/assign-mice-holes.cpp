class Solution {
  public:
    int assignHole(vector<int>& mices, vector<int>& holes) {
        // code here
        sort(mices.begin(),mices.end());
        sort(holes.begin(),holes.end());
        
        int maxi = INT_MIN;
        
        int n =  mices.size();
        for(int i =0; i < n ; i++)
        {
            maxi = max(maxi , abs(mices[i] - holes[i]));
        }
        
        return maxi;
    }
};