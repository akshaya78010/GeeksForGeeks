class Solution {
  public:
    
    void type2(deque<int> &q,int k){
        
        int n = k;
        int temp = 0;
        while(n--)
        {
            temp = q.front();
            q.pop_front();
            q.push_back(temp);
        }
    }
    
    void type1(deque<int> &q,int k)
    {
        int n = k;
        int temp = 0;
        
        while(n--)
        {
            temp = q.back();
            q.pop_back();
            q.push_front(temp);
        }
    }
    void rotateDeque(deque<int>& dq, int type, int k) {
        // code here
        
        if(type == 1)
        {
            type1(dq,k);
        }
        else if(type == 2)
        {
            type2(dq,k);
        }
        
    }
};