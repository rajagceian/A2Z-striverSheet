/*
Time Complexity:

    Best Case: (Ω(n log n)), Occurs when the pivot element divides the array into two equal halves.
    Average Case (θ(n log n)), On average, the pivot divides the array into two parts, but not necessarily equal.
    Worst Case: (O(n²)), Occurs when the smallest or largest element is always chosen as the pivot (e.g., sorted arrays).

Auxiliary Space:

    Worst-case scenario: O(n) due to unbalanced partitioning leading to a skewed recursion tree requiring a call stack of size O(n).
    Best-case scenario: O(log n) as a result of balanced partitioning leading to a balanced recursion tree with a call stack of size O(log n).

    -> Not Stable
    -> QuickSort is broadly considered an in-place sorting algorithm.
*/
class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low>=high) return;
        int correctPivotIdx = partition(arr,low,high);
        quickSort(arr,low,correctPivotIdx-1);
        quickSort(arr,correctPivotIdx+1,high);
        
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        
        // code here
        int pivot = arr[high];
        int i = low-1;
        for(int j=low;j<high;j++){
            if(arr[j]<pivot){
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[high]);
        return i+1;
    }
};