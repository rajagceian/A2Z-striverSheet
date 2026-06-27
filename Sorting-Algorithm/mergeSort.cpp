/*
Time Complexity:
    Best Case: O(n log n), When the array is already sorted or nearly sorted.
    Average Case: O(n log n), When the array is randomly ordered.
    Worst Case: O(n log n), When the array is sorted in reverse order.
Space :
    O(n) => Outplace(Need Extra space to sort)

    -> Stable Sort
*/

class Solution {
  public:
    void merge(vector<int>& arr, int l,int mid, int r){
        vector <int> left(mid-l+1),right(r-mid);
        for(int i=0;i<left.size();i++){
            left[i] = arr[l+i];
        }
        for(int i=0;i<right.size();i++){
            right[i] = arr[mid+1+i];
        }
        int i=0,j=0;
        while(i<left.size() && j<right.size()){
            if(left[i]<right[j]){
                arr[l++] = left[i++];
            } else{
                arr[l++] = right[j++];
            }
        }
        while(i<left.size()){
            arr[l++] = left[i++];
        }
        while(j<right.size()){
            arr[l++] = right[j++];
        }
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l>=r) return;
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};