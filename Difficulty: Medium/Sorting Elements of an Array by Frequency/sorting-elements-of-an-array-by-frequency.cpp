#include <bits/stdc++.h>
using namespace std;

int main() {
	//code here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int>arr(n);
	    
	    for(int i =0; i < n ; i++)
	    {
	        cin>>arr[i];
	    }
	    
	    map<int,int>mpp;
	    
	    for(int i =0; i < n ; i++)
	    {
	        mpp[arr[i]] += 1;
	    }
	    
	    sort(arr.begin(),arr.end());
	    sort(arr.begin(),arr.end(),[&mpp](int a,int b){
	        
	        if(mpp[a] == mpp[b])
	        {
	            return a < b;
	        }
	        return mpp[a] > mpp[b];
	    });
	    
	    for(int i =0; i < n ; i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    cout<<'\n';
	}
	return 0;
}