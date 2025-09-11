class Solution {
  public:
  
   
    int countDigits(int n) {
        int cnt=0;
        // code here
        if (n == 0) return 1;
        while(n!=0)
        {
            n=n/10;
            cnt++;
        }
        return cnt;
    }
};
