#include <iostream>
using namespace std;

void inserionSort(int array[], int size) {

  for (int i=0; i< size-1; ++i) {
    for (int j=i+1; j< size; ++j) {

      if (array[i] > array[j]) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
  
  cout << "Sorted Array in Ascending Order:\n";  
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
}


int main() {
  int data[] = {-2, 45, 0, 11, -9};
  int size = 5;
  
  inserionSort(data, size);
}