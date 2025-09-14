class Solution {
  public:
  //tc o(n+nlog(logn)+n)
  //sc o(n)
  //an ancient algo to find all the prime numbers till n
    vector<int> sieve(int n) {
        // code here
        vector<int>prime(n+1);
        //o(n)
        for(int i=2;i<=n;i++)
        {
            prime[i]=1;
        }
        //optimising for traversing the out of bound space after root n 
        for(int i=2;i*i<=n;i++)
        {
            if(prime[i]==1)
            {
                //optimising for repeated multiplication visits
                for(int j=i*i;j<=n;j+=i)
                {
                    prime[j]=0;
                }
            }
        }
        
        vector<int> primesList;
        for (int i = 2; i <= n; i++) {
            if (prime[i] == 1) primesList.push_back(i);
        }
        return primesList;
    }
};
