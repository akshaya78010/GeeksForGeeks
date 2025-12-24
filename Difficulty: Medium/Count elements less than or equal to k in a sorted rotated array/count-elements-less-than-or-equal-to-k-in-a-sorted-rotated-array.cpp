class Solution {
    public:
    int countLessEqual(vector<int>& arr, int x) {
        // code here
     sort(arr.begin(),arr.end());
     
     auto it = upper_bound(arr.begin(),arr.end(),x);
     
     int dist = 0;
     
     if(it != arr.end()){
     dist = distance(arr.begin(),it);
     }
     else
     {
         dist = arr.size();
     }
     
     return dist;
    }
};