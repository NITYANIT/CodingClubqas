class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        //game of cards
        int n=arr.size();
        for(int i=1;i<n;i++)
        {
            int key=arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>key)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
        
    }
};
//insertion sort:tries to correct its pvs people as if its present is good. 
//                    BC                   WC(AC)
//bubblesort          N(if sorted)           N**2
//insertionsort       N(if sorted)           N**2
//selectionsort       N**2                   N**2  
//selects min from the unsorted part of array and swaps it with the last part of the sortedpart
