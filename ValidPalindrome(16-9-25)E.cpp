class Solution {
public:
    bool isPalindrome(string s) {
        //acceptable but tc and sc are o(n)
        // string cleaned = "";
        // for (char c : s) {
        //     if (isalnum(c)) {
        //         cleaned += tolower(c);
        //     }
        // }

        // string reversedStr = cleaned;
        // reverse(reversedStr.begin(), reversedStr.end());

        // return cleaned == reversedStr;


        //without extra space o(1)
        //2 ptr appraoch
         int left = 0, right = s.size() - 1;

        while (left < right) {
            // skip non-alphanumeric characters like spaces,:,;
            //by increasing pointers
            while (left < right && !isalnum(s[left])) left++;
            while (left < right && !isalnum(s[right])) right--;

            // compare in lowercase the alphanumeric chars
            if (tolower(s[left]) != tolower(s[right]))
                return false;

            left++;
            right--;
        }
        return true;
    }
};
