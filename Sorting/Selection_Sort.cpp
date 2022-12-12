#include<iostream>
using namespace std;

// This function will find the smallest element from the array and will return it's position
int findSmallest(int myarray[], int i, int size) {
  int ele_small, position, j;
  ele_small = myarray[i];
  position = i;
  for (j = i + 1; j < size; j++) {
    if (myarray[j] < ele_small) {
      ele_small = myarray[j];
      position = j;
    }
  }
  return position;
}

int main() {
  int size;
  cout << "Enter the size of array : ";
  cin >> size;
  int myarray[size];
  for (int i = 0; i < size; i++) {
    cin >> myarray[i];
  }

  int pos, temp;
  cout << "\n Input list of elements to be Sorted\n";
  for (int i = 0; i < size; i++) {
    cout << myarray[i] << "\t";
  }
  
  // Finding the smallest element and replacing the position with the current element
  for (int i = 0; i < size; i++) {
    pos = findSmallest(myarray, i, size);
    temp = myarray[i];
    myarray[i] = myarray[pos];
    myarray[pos] = temp;
  }
  
  //Display the sorted array
  cout << "\n Sorted list of elements is\n";
  for (int i = 0; i < size; i++) {
    cout << myarray[i] << "\t";
  }
  return 0;
}


/*
Time Complexity : O(n^2)
Space Complexity : O(1) 
*/
