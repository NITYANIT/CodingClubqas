class Solution {
public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        int left = n - 1;
        int right = 0;

        // Step 1: Swap bigger element in a with smaller in b
        while (left >= 0 && right < m) {
            if (a[left] > b[right]) {
                swap(a[left], b[right]);
                left--;
                right++;
            } else {
                break;
            }
        }

        // Step 2: Re-sort both arrays
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        //tc:   o(nlogn)+o(mlogn)+o(min(n,m))    sc:o(1)\
        //gap methos tc:o(log(n+m)base 2)+o(n+m)  sc:o(1)
        //class Solution {
// public:
//     void mergeArrays(vector<int>& a, vector<int>& b) {
//         int n = a.size(), m = b.size();
//         int len = n + m;

//         auto swapIfGreater = [&](int &x, int &y) {
//             if (x > y) swap(x, y);
//         };

//         // initial gap = ceil(len/2)
//         int gap = (len / 2) + (len % 2);

//         while (gap > 0) {
//             int left = 0;
//             int right = left + gap;

//             while (right < len) {
//                 // Case 1: both in a
//                 if (left < n && right < n) {
//                     swapIfGreater(a[left], a[right]);
//                 }
//                 // Case 2: left in a, right in b
//                 else if (left < n && right >= n) {
//                     swapIfGreater(a[left], b[right - n]);
//                 }
//                 // Case 3: both in b
//                 else {
//                     swapIfGreater(b[left - n], b[right - n]);
//                 }

//                 left++;
//                 right++;
//             }

//             if (gap == 1) break;
//             gap = (gap / 2) + (gap % 2); // reduce gap
//         }
//     }
// };

    }
};
