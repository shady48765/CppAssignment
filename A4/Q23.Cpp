
#include<iostream>

using namespace std;

void array_function ( int numbers[], size_t size, int n);//function prototype
 int main()
{
    
    int arr[] {5,3, 7, 80, 19};
    array_function (arr, 5, 8);//calling function
    array_function (arr, 8, 3);// since i have only five numbers in array it will display default value.
    return 0;
    
    
}
 void array_function (int numbers[], size_t size, int n)//function definition
{
    for( int i = 0; i <= size; i ++)
    { 
        if ( numbers[i] > n)
        cout<<numbers[i]<<endl;
    }
        
}
