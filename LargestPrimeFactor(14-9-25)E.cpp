class Solution {
  public:
  //initial brute soln is,apply run a while loop n->0 and check whether its a prime then return. 
 //to check if its a prime do seiveoferastosthenes.but it causes runtime error
  //folowing prime factorisation method
    int largestPrimeFactor(int n) {
        
        // code here
        //first churn out the 2 and its mutiples first
        int ans=-1;;
        while(n%2==0)
        {
            ans=n;
            n=n/2;
        }
        for(int i=3;i*i<=n;i+=2)
        {
            while (n % i == 0) {   // keep dividing until not divisible
                ans = i;
                n /= i;
            }
        }
        if(n>2) ans=n;
        return ans;
        
    }
};
