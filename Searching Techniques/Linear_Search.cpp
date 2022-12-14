#include <iostream>
using namespace std;

int search(int arr[], int size, int find)
{
	int i;
	for (i = 0; i < size; i++)
		if (arr[i] == find)
			return i;
	return -1;
}

int main()
{
  int size;
  cout << "Enter the size of array : ";
  cin >> size;
  
	int arr[size];
  for(int i=0; i<size; i++) {
    cin >> a[i];
  }
  
	int x = 10;     // Element to search

	// Function call
	int result = search(arr, size, x);
	(result == -1) ? cout << "Element is not present in array" : cout << "Element is present at index " << result;
  
	return 0;
}


/*
Time Complexity : 
                  Best Case : O(1)
                  Average Case : O(N)
                  Worst Case : O(N)

Space Complexity : O(1)

*/
