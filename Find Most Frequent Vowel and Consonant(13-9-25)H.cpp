class Solution {
public:
//tc:  o(n)to traverse
//sc:  o(const) coz 26 is the size of freq map
//int freq[26] = array-based hash table for frequency counting for a small domain
//Why array works here?The input domain is only lowercase English letters → exactly 26 possibilities.So instead of using a dynamic structure like unordered_map<char,int>, you can directly map each character to an index:'a' → 0, 'b' → 1, … 'z' → 25.This is much faster and memory-efficient compared to a map.
    int maxFreqSum(string s) 
    {
        //must initialise
      int freq[26]={0};
      int maxvow=0;
      int maxcons=0;
      for(char c:s)
      {
        int i=c-'a';
        freq[i]++;
        if(c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u' )
        {
            maxvow=max(maxvow,freq[i]);
        }
        else{
             maxcons=max(maxcons,freq[i]);
        }
      } 
      return maxvow+maxcons;   
    }
};
