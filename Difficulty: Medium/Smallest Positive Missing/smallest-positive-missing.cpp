class Solution {
  public:
   void fun(vector<int>&arr)
   {
       int n = arr.size();
       
       if(n <= 0)
       {
           return;
       }
       
       int idx = 1;
       
       
       for(int i = 1; i < n ; i++)
       {
           if(arr[i] != arr[i+1])
           {
               arr[idx++] = arr[i];
           }
       }
       
       arr.erase(arr.begin()+idx,arr.end());
       
       auto it = arr.begin();
       
       while(it != arr.end())
       {
           if(*it <= 0)
           {
               arr.erase(it);
           }
           else
           {
               it+=1;
           }
       }
      
      
      for(int i = 1; i < arr.size() ; i++)
      {
          arr[i] = arr[i] + arr[i-1];
      }
   }
    int missingNumber(vector<int> &arr) {
        // code here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        
        fun(arr);
        
        if(arr.size() == 0)
        {
            return 1;
        }
    
        int num = 1;
        int correct_sum = 0;
        int cal_sum = 0;
        int result = 0;
        for(int i = 0; i < arr.size() ; i++)
        {
            correct_sum = num * (num+1)/2;
            if(i == 0)
            {
                if(arr[i] != 1)
                {
                    return 1;
                }
                else
                {
                    cal_sum = arr[i]; 
                }
            }
            else
            {
             cal_sum = arr[i]; 
            }
            
            if(correct_sum != cal_sum)
            {
                result = num;
                break;
            }
            num+=1;
        }
        
        
        if(result == 0)
        {
            result = num;
        }
        return result;
    }
};