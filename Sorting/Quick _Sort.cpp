#include <iostream>
using namespace std;

// Swap two elements
void swap(int * a, int * b) {
  int t = * a;
  * a = * b;
  * b = t;
}

// Partition the array using last element as pivot
int partition(int arr[], int low, int high) {
  int i = (low - 1);
  for (int j = low; j <= high - 1; j++) {
    //if current element is smaller than pivot, increment the low element
    //swap elements at i and j
    if (arr[j] <= pivot) {
      i++; // increment index of smaller element
      swap( & arr[i], & arr[j]);
    }
  }
  swap( & arr[i + 1], & arr[high]);
  return (i + 1);
}

//quicksort algorithm
void quickSort(int arr[], int low, int high) {
  if (low < high) {
    //partition the array 
    int pivot = partition(arr, low, high);
    //sort the sub arrays independently
    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot + 1, high);
  }
}

void displayArray(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << arr[i] << "\t";
}

int main() {
  int arr[] = {7,6,9,1,4};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Input array" << endl;
  displayArray(arr, n);
  cout << endl;
  quickSort(arr, 0, n - 1);
  cout << "Array sorted with quick sort" << endl;
  displayArray(arr, n);
  return 0;
}


/*
Time Complexity : 
                  Best Case	: O(n*logn)
                  Average Case :	O(n*logn)
                  Worst Case :	O(n2)
                  
Space Complexity	: O(n*logn)
*/


/*

Algorithm : 

QUICKSORT (array A, start, end)     
{  
    if (start < end)     
    {  
        p = partition(A, start, end)   --->  Partition Algorithm:
                                                          partition (array A, start, end)     
                                                          {  
                                                               pivot ? A[end]     
                                                               i ? start-1     
                                                              for j ? start to end -1 {  
                                                                  do if (A[j] < pivot) {    
                                                                      then i ? i + 1     
                                                                      swap A[i] with A[j]   
                                                                   }
                                                                }   
                                                               swap A[i+1] with A[end]     
                                                               return i+1  
                                                             }  


          QUICKSORT (A, start, p - 1)    
          QUICKSORT (A, p + 1, end)    
      }   
} 

*/
