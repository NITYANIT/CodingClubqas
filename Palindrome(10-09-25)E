//Reverse Integer: Must stay in int range → overflow check is necessary.
//Palindrome Number: Just compare → long is safe, no need for checks.

class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0)
        {
            return false;
        }    
        long ans=0;
        int copy=x;
        //dont write x!=0 bcoz its correct for -ve nos.we only want +ve nos
        while(x>0)
        {
            int rem=x%10;
            ans=ans*10+rem;
            x=x/10;
        }
        return ans==copy;
    }
};
