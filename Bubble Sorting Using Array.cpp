#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {

  for (int i=0; i< size; ++i) {
    for (int j=0; j< size-i; ++j) {

      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
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
  
  bubbleSort(data, size);
}