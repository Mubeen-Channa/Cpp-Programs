#include <iostream>
using namespace std;

void insertionSort(int array[], int size) {

    int temp, min;
    
    for(int i=0;i<size-1;i++)
    {
        min=i;
        for(int j=i+1;j<size;j++)
        {
         if(array[j]<array[min])
         {
          min=j;
         }
        }
        temp = array[i];
        array[i] = array[min];
        array[min] = temp; 
    }
  
  cout << "Sorted Array in Ascending Order:\n";  
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
}


int main() {
    
    int size;
    cout<<"Enter The Size Of Array : "; cin>>size;
    
    int data[size];
    cout<<"Enter The Element Of Array \n";
    for(int i=0;i<size;i++)
    {
        cin>>data[i];
    }
  
  insertionSort(data, size);
}
