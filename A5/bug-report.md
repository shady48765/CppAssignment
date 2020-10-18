Bug 1

1. The incorrect original code or code snippit that you wrote:

#include<iostream>

using namespace std;

int swap(int *x, int *y) //using pointer instead of reference variables.
{
	int temp = *x;  // x any y are now pointer and in this function values of x any y are swapping so temp store x value  
 
	*x = *y * 5; // value of x is changed and use the value of y with multiple of 5. so x and y are both dereferenced and the operator after y is multiplication operator.
    
	*y = temp * 3; // modifying value of y using temp value and y is dereferencing but not temp because it is not a pointer.
    
	return (*x) + (*y); // return the addition of x and y but first dereference both of them. 
    
}

int main()
{
    int *x, *y;
    int num1, num2;
    *x = num1;
    *y = num2;
    cout<<" enter a number" <<endl;
    cin>>num1;
    cout<<" enter another number"<< endl;
    cin>>num2;
    int  swap(int *x, int *y);
    swap(x,y);
    cout<<" result is "<< *x + *y;
    
}

2. What bug does the original code have?

The original code seems to be correct and it will run before any difficulty but it give wrong output because in this i am assigning address of num1 and num2 variables to pointer without getting values from user.

3. What misunderstanding of C++ concepts lead you to this incorrect code?

It is not misunderstanding mistakenly i immediately store the address of variables to pointer without getting them.

4. How to correct the bug?

Store the address of variables to pointer after getting them from user otherwise they use default values.

5. The corresponding bug-free code or code snippet is:

#include<iostream>

using namespace std;

    
int swap(int *x, int *y) //using pointer instead of reference variables.
{
	int temp = *x;  // x any y are now pointer and in this function values of x any y are swapping so temp store x value  
 
	*x = *y * 5; // value of x is changed and use the value of y with multiple of 5. so x and y are both dereferenced and the operator after y is multiplication operator.
    
	*y = temp * 3; // modifying value of y using temp value and y is dereferencing but not temp because it is not a pointer.
    
	return (*x) + (*y); // return the addition of x and y but first dereference both of them. 
    
}

int main()
{
    int *x, *y;
    int num1, num2;
    cout<<" enter a number" <<endl;
    cin>>num1;
    cout<<" enter another number"<< endl;
    cin>>num2;
    *x = num1;
    *y = num2;
    int  swap(int *x, int *y);
    swap(x,y);
    cout<<" result is "<< *x + *y;
    
}

6. What is the take-away message from this bug?
  
  Check the code carefully and avoid silly mistakes for successfully run the code and get correct output.

Bug 2

1. The incorrect original code or code snippit that you wrote:

#include<iostream>

using namespace std;

int swap(int *x, int *y) //using pointer instead of reference variables.
{
	int temp = *x;  // x any y are now pointer and in this function values of x any y are swapping so temp store x value  
 
	*x = *y * 5; // value of x is changed and use the value of y with multiple of 5. so x and y are both dereferenced and the operator after y is multiplication operator.
    
	*y = temp * 3; // modifying value of y using temp value and y is dereferencing but not temp because it is not a pointer.
    
	return (*x) + (*y); // return the addition of x and y but first dereference both of them. 
    
}

int main()
{
    int *x, *y;
    int num1, num2;
    *x = num1;
    *y = num2;
    cout<<" enter a number" <<endl;
    cin>>num1;
    cout<<" enter another number"<< endl;
    cin>>num2;
    int  swap(int *x, int *y);
    swap(*x,*y);
    cout<<" result is "<< *x + *y;
    
}

2. What bug does the original code have?

In the above code when the swap function is calling arguments x and y should pass but it is passing the pointers.

3. What misunderstanding of C++ concepts lead you to this incorrect code?

I think like initializing the function prototype and function definition for pointers i also need to pass pointers value while calling function.

4. How to correct the bug?

Instead of passing the pointer value, address should pass while calling.

5. The corresponding bug-free code or code snippet is:

#include<iostream>

using namespace std;

    
int swap(int *x, int *y) //using pointer instead of reference variables.
{
	int temp = *x;  // x any y are now pointer and in this function values of x any y are swapping so temp store x value  
 
	*x = *y * 5; // value of x is changed and use the value of y with multiple of 5. so x and y are both dereferenced and the operator after y is multiplication operator.
    
	*y = temp * 3; // modifying value of y using temp value and y is dereferencing but not temp because it is not a pointer.
    
	return (*x) + (*y); // return the addition of x and y but first dereference both of them. 
    
}

int main()
{
    int *x, *y;
    int num1, num2;
    cout<<" enter a number" <<endl;
    cin>>num1;
    cout<<" enter another number"<< endl;
    cin>>num2;
    *x = num1;
    *y = num2;
    int  swap(int *x, int *y);
    swap(x,y);
    cout<<" result is "<< *x + *y;
    
}

6. What is the take-away message from this bug?

While calling a function for pointer variables address should pass.


Bug 3

1. The incorrect original code or code snippit that you wrote:

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
    print(org_array, 6); // calling function for priting array
  
    cout << "Reverse "; 
    reverse(org_array, 6);  
    return 0; 
} 

2. What bug does the original code have?

In the original code i forget to call the call the print function after reversing it. So reversed array was not displayed.

3. What misunderstanding of C++ concepts lead you to this incorrect code?

It is not a misunderstanding i just forget.

4. How to correct the bug?

Call the print function after calling the reverse function so that reverse array gets dispalyed.

5. The corresponding bug-free code or code snippet is:

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
    print(org_array, 6); // calling function for priting array
  
    cout << "Reverse "; 
    reverse(org_array, 6); 
    print(org_array, 6); 
    return 0; 
} 

6. What is the take-away message from this bug?

After doing any changes to function it is necessary to print it so that we can know is the function working.
