class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        //euclidean algo
        while(b!=0)
        {
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
        //brute appraoch
        //gcdval=1
        //smaller=a>b?a:b
        //for(i=smaller;i>=1;i--)
        //{if(a%i==0 && b%i==0)
        //   gcdval=i;break;
        //}
        //retrun gcdval
        //std::gcd(a,b)    direct method to get gcd , by inbuilt method dont use in interviews.  
    }
};
