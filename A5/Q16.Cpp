
#include <iostream> 
using namespace std; 
  
// Function to swap two memory contents 
void swap(int* a, int* b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
  
// Function to reverse the array through pointers 
int reverse(int org_array[], int array_size) 
{ 
  
    // pointer1 pointing at the beginning of the array 
    int *pointer1 = org_array, 
  
        // pointer2 pointing at end of the array 
        *pointer2 = org_array + array_size - 1; 
    while (pointer1 < pointer2) { 
        swap(pointer1, pointer2); 
        pointer1++; 
        pointer2--; 
        
        return *pointer1;
    } 
} 
  
// Function to print the array 
void print(int* org_array, int array_size) 
{ 
  
    // Length pointing at end of the array 
    int *length = org_array + array_size, 
  
        // Position pointing to the beginning of the array 
        *position = org_array; 
    cout << "Array = "; 
    for (position = org_array; position < length; position++) 
        cout << *position << " "; 
} 
  

int main() 
{ 
  
    // Array to hold the values 
    int org_array[] = { 2, 4, -6, 5, 8, -1 }; 
  
    cout << "Original "; 
    print(org_array, 6); // calling function for printing array
  
    cout << "Reverse "; 
    reverse(org_array, 6); //calling function for reversing
    print(org_array, 6); 
    return 0; 
} 



