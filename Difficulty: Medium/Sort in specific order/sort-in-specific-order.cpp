class Solution {
  public:
    void sortIt(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end(),[](int a,int b){
            return (a%2 != 0 && b%2 == 0) ;
        });
        
        int ind = -1;
        
        int n = arr.size();
        for(int i =0; i < n ; i++){
            if(arr[i]%2 == 0){
                ind = i;
                break;
            }
        }
        
        if(ind != -1){
        if(arr[0] == 0){
            arr.erase(arr.begin());
            arr.push_back(0);
        }
        
        sort(arr.begin(),arr.begin() + ind);
        reverse(arr.begin(),arr.begin() + ind);
        
        sort(arr.begin() + ind,arr.end());
        // cout<<"okay"<<'\n';
    }
    else
    {
        if(arr[0]%2 == 0){
            sort(arr.begin(),arr.end());
        }
        else if(arr[0]%2 != 0){
            sort(arr.begin(),arr.end());
            reverse(arr.begin(),arr.end());
        }
    }
    }
};