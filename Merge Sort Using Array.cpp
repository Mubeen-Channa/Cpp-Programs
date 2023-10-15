#include <iostream>
using namespace std;

// Merge two subarrays ar1 and ar2 into arr
void merge(int arr[], int left, int mid, int right) {
  
  int n1 = mid - left + 1;
  int n2 = right - mid;

  int ar1[n1], ar2[n2];

  for (int i = 0; i < n1; i++)
    ar1[i] = arr[left + i];
    
  for (int j = 0; j < n2; j++)
    ar2[j] = arr[mid + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = left;

  // Until we reach either end of either ar1 or ar2, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (ar1[i] <= ar2[j]) {
      arr[k] = ar1[i];
      i++;
    } else {
      arr[k] = ar2[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either ar1 or ar2,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = ar1[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = ar2[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}


int main() {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]); // Size of array

  mergeSort(arr, 0, size - 1);

  cout << "Sorted array: \n";
  for (int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}