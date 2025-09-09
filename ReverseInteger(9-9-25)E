class Solution {
public:
    int reverse(int x) {
       
        int ans=0;
        while(x!=0)
        {
            int rem=x%10;
            x=x/10;
            //These lines pre-check whether the next multiplication + addition would overflow.
            //ans*10>intmax
            //dont miss this out!!everytime u do this.***check overflow.else RUNTIME ERROR
            if(ans > INT_MAX/10 || (ans == INT_MAX / 10 && rem > 7) )
            {
                return 0;
            }
            if(ans < INT_MIN/10 || (ans==INT_MIN/10 && rem<-8))
            {
                return 0;
            }
            ans=ans * 10+rem;
        }
        return ans;
    }
};
