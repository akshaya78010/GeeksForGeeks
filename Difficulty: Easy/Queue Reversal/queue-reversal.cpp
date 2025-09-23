class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
       vector<int>arr;
       
       while(!q.empty()){
           arr.push_back(q.front());
           q.pop();
       }
       
       reverse(arr.begin(),arr.end());
       
       int n = arr.size();
       
       int i =0;
       while(n--){
          q.push(arr[i++]);
       }
       
    }
};