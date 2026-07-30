//link => https://www.geeksforgeeks.org/problems/heap-sort/1

//=========== T.C = O(nlogn) and S.C = call stack (logn) ========
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // For sorting in increasing order, Heap Sort uses a max heap.
    void heapify(vector <int> &arr,int i,int n){
        int maxIdx = i;
        int left = 2*i+1;
        int right = 2*i+2;
        if(left<n && arr[maxIdx]<arr[left]) maxIdx = left;
        if(right<n && arr[maxIdx]<arr[right]) maxIdx = right;
        if(i!=maxIdx){
         swap(arr[i],arr[maxIdx]);
         heapify(arr,maxIdx,n);
        }
    }
    void buildHeap(vector <int>&arr,int n){
        int mid = n/2 - 1;
        for(int i=mid;i>=0;i--){
            heapify(arr,i,n);
        }
    }
    void heapSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        buildHeap(arr,n);
        for(int i=n-1;i>=0;i--){
            swap(arr[0],arr[i]); // place last element at top and apply heapify
            heapify(arr,0,i);
        }
    }
};