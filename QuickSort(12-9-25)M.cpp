class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if (low < high) {
            // partition the array
            int pi = partition(arr, low, high);

            // Recursively sort left and right parts
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
        
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        
        // code here
         int pivot = arr[high];   // pivot = last element
        int i = low - 1;         // index of smaller element

        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }

        // place pivot at the correct position
        swap(arr[i + 1], arr[high]);
        return i + 1;   
    }
};
