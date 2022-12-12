#include<iostream>
using namespace std;

int main() {
  int size;
  cout << "Enter the size of array : ";
  cin >> size;
  int myarray[size];
  for (int i = 0; i < size; i++) {
    cin >> myarray[i];
  }

  cout << "\nInput list is \n";
  for (int i = 0; i < size; i++) {
    cout << myarray[i] << "\t";
  }
   
  for (int k = 1; k < size; k++) {
    int temp = myarray[k];
    int j = k - 1;
    while (j >= 0 && temp <= myarray[j]) {
      myarray[j + 1] = myarray[j];
      j = j - 1;
    }
    myarray[j + 1] = temp;
  }

  cout << "\nSorted list is \n";
  for (int i = 0; i < size; i++) {
    cout << myarray[i] << "\t";
  }
  return 0;
}




/*
Time Complexity : O(n^2) 
Space Complexity : O(1) 
*/
