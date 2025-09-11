class Solution {
public:
    void mergearr(vector<int>& arr, int l, int m, int r) {
        int n1 = m - l + 1;
        int n2 = r - m;

        vector<int> L(n1), R(n2);

        // Copy left half
        for (int i = 0; i < n1; i++)
            L[i] = arr[l + i];

        // Copy right half
        for (int j = 0; j < n2; j++)
            R[j] = arr[m + 1 + j];

        int i = 0, j = 0, k = l;

        // Merge two sorted halves
        while (i < n1 && j < n2) {
            if (L[i] <= R[j])
                arr[k++] = L[i++];
            else
                arr[k++] = R[j++];
        }

        // Copy remaining L
        while (i < n1)
            arr[k++] = L[i++];

        // Copy remaining R
        while (j < n2)
            arr[k++] = R[j++];
    }

    void mergeSort(vector<int>& arr, int l, int r) {
        if (l < r) {
            int m = l + (r - l) / 2;

            mergeSort(arr, l, m);       // sort left half
            mergeSort(arr, m + 1, r);   // sort right half
            mergearr(arr, l, m, r);     // merge halves
        }
    }
};
