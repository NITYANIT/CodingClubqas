class Solution {
  public:
    // Function to perform selection sort on the given array.
    //o(n)cant be achived cz even i the array is already sorted,it traverses for minimum
    void selectionSort(vector<int> &arr) {
        // code here
        //select min in unsorted part of array
        //swap it with the 1st ele of unsorted arry
        //increment the sorted part index
        //repeat until sorted
        //last eemnt is alreday sorted.so we dont care.
        int n=arr.size();
        for(int i=0;i<n-1;i++)
        {
            int min=i;
            //bcz it sd search in unsorted array,it will be at last.n-1.
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<arr[min])
                {
                    min=j;
                }
            }
            swap(arr[i],arr[min]);
        }
        
    }
};
