//Pick the next element and insert it into its correct position in the sorted part.
//========== T.C = O(n^2) and S.C = O(1) ================
class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        int n=arr.size();
        for(int i=1;i<n;i++){
            int p = arr[i];
            int j = i-1;
            while(j>=0 && arr[j]>p){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1] = p; // Place it sorted place
        }
    }
};