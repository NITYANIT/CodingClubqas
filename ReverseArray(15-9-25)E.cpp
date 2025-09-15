class Solution {
  public:
  //instead of using indices of array and solving,use 2 ptrs technique.
    void reverseArray(vector<int> &arr) {
        int left = 0;
        int right = arr.size() - 1;
        while (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
    //tc:n/2 nearly n
    //sc:1
};
