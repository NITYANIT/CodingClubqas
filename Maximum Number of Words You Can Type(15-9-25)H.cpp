class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        //very very easy soln 
        //dont make it complex
        bool map[26];
        for(char ch :brokenLetters)
        {
            map[ch-'a']=true;
        }
        int result=0;
        bool canType=true;
        for(char ch:text)
        {
            if(ch==' ')
            {
               if(canType)
               {
                result++;
                
               }
               canType=true;
            }
            else if(map[ch-'a']==true)
            {
                canType=false;
            }
        }
        if(canType)
        {
            result++;
        }
      return result;
    }
};
//  This runs in O(n + m) time (n = text length, m = brokenLetters length).
//  Uses only a simple bool[26] array.
//  Very easy & efficient.
