#include<iostream>
using namespace std;

int main()
{
    int i, size, num, first, last, middle;
  
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    
    cout<<"Enter Elements (in ascending order): ";              // You can also use a sorting algorithm to sort the array and then search
    for(i=0; i<size; i++)
        cin>>arr[i];
  
    cout<<"\nEnter Element to be Search: ";
    cin>>num;
  
    first = 0;
    last = size-1;
    middle = ((last-first)/2)+first;        // To manage the long integers Eg : 1225874523
    while(first <= last)
    {
        if(arr[middle]<num)
            first = middle+1;
        else if(arr[middle]==num)
        {
            cout<<"\nThe number, "<<num<<" found at Position "<<middle+1;
            break;
        }
        else
            last = middle-1;
        
        middle = ((last-first)/2)+first;
    }
  
    if(first>last)
        cout<<"\nThe number, "<<num<<" is not found in given Array";
    cout<<endl;
    
    return 0;
}


/*

Time Complexity :
                    Best Case : O(1)
                    Average Case : O(logN)
                    Worst Case : O(logN)

Space Complexity : 
                    O(1) for iterative
                    O(logN) for recursiv

*/
