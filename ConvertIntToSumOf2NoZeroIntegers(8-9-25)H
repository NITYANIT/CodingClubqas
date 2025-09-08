class Solution {
public:
  
    bool nonzero(int k)
    {
        while(k!=0)
        {
            if(k%10 ==0)
          {
            return false;
          }
          k=k/10;
          
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int>result;
        for(int i=1;i<n;i++)
        {
           int k=n-i;
           if(nonzero(k)&&nonzero(i))
           {
            result.push_back(i);
            result.push_back(k);
            break;
           }

        }
        return result;
    }
};
