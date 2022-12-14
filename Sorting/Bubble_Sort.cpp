#include<iostream>
using namespace std;

int main() {
  int i, j, temp;
  
  int size;
  cout << "Enter the size of array : ";
  cin >> size;
  // Accepting the size of array and array elements
  int a[size];
  for(int i=0; i<size; i++) {
    cin >> a[i];
  }
  
  // Display the array
  cout << "Input list is ...\n";
  for (i = 0; i < size; i++) {
    cout << a[i] << "\t";
  }
  cout << endl;
  
  // Swapping of elements is done here
  for (i = 0; i < size; i++) {
    for (j = i + 1; j < size; j++) {
      if (a[j] < a[i]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  
  // Display the sorted array [Ascending order]
  cout << "Sorted Element List ...\n";
  for (i = 0; i < size; i++) {
    cout << a[i] << "\t";
  }
  return 0;
}


/*
Time Complexity : O(n^2)
Space Complexity : O(1)
*/
