class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
           sort(prices.begin(),prices.end());
           
           int i =0;
           int j =prices.size() - 1;
           int n = prices.size();
           
           int mini = 0;
           int maxi = 0;
           while(i <= j){
               mini += prices[i];
               i+=1;
               j-=k;
           }
           
           i =0;
           j = n-1;
           while(i <= j){
               maxi += prices[j];
               i+=k;
               j-=1;
           }
           
        //   cout<<mini<<" "<<maxi<<'\n';
           
           return {mini,maxi};
        }
};