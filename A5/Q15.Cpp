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
