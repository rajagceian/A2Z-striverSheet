//Select the smallest element and place it in its correct position.
//============= T.C = O(n^2) and S.C = O(1) ========
class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        int n = arr.size();
        for(int i=0;i<n-1;i++){
            int minIdx = -1;
            int mini = arr[i];
            for(int j=i+1;j<n;j++){
                if(mini>arr[j]){
                    mini = arr[j];
                    minIdx = j;
                }
            }
            if(minIdx != -1) swap(arr[i],arr[minIdx]);
        }
    }
};