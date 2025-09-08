class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int n=arr.size();
        //It still works with n ut the last pass does nothing (wasted time).
        for(int i=0;i<n-1;i++)
        {
            //optimise2:if already sorted case
            bool sorted=true;
            //optimise1:here after evry iteration,the last one goes to its place.so we need not to sort.
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    //swap
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                     sorted=false;
                }
               
            }
            if(sorted)
            {
                break;
            }
        }
        
    }
};
