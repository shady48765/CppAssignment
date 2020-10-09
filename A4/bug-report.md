```
BUG 1
1. The incorrect original code or code snippit that you wrote:

#include<iostream>

using namespace std;

void array_function ( int numbers[], size_t size, int n);//function prototype
 int main()
{
    int arr[] {5,3, 7, 80, 19};
    array_function (arr[], 5, 8);//calling function
    array_function (arr[], 8, 3);// since i have only five numbers in array it will display default value.
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

2. What bug does the original code have?

In the above code in line 9 and 10 i had put square bracket after arr[].

3. What misunderstanding of C++ concepts lead you to this incorrect code?

I think like initializing we should also pit square bracket while passing array.

 4.How to correct the bug?
 
 I had just remove sqaure brackets after arr and code executed without errors.

5. The corresponding bug-free code or code snippet is:

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

6. What is the take-away message from this bug?

One should not put sqaure brackets every time after array name.

Bug 2

1. The incorrect original code or code snippit that you wrote:

#include<iostream>

using namespace std;

int isprime(int); // function protoype;

int main ()
{
  int n;
  cout<<" Enter the positive integer"<<endl;
  cin>>n; // accepting argument
  isprime(n); // calling the function
  isprime(5); //test cases on every execution test if number is prime or not
  isprime(9);
}
   int isprime(int n)
  {  
      int r = 0; 
      for(int i = 2; i<= n-1; i++)
  {
      if(n%i ==0)
    { 
      cout<<" Number is not prime "; 
       break; // whenever get the non prime number break the loop immediately
    } 
  }
   if(r==0){
       
       cout<<"Prime number"<<endl;
   
   }
   return 0;
      
  }

2. What bug does the original code have?

In the above code whenenver user enter the number that is not prime code shows two output number is not prime and number is prime. Actually i miss to changing value of r in if block line 22nd.

3. What misunderstanding of C++ concepts lead you to this incorrect code?

Actually i forget to change value therefore get unexpected output.

4. How to correct the bug?

I assigned 1 value to r in if statement.

5. The corresponding bug-free code or code snippet is:

#include<iostream>

using namespace std;

int isprime(int); // function protoype;

int main ()
{
  int n;
  cout<<" Enter the positive integer"<<endl;
  cin>>n; // accepting argument
  isprime(n); // calling the function
  isprime(5); //test cases on every execution test if number is prime or not
  isprime(9);
}
   int isprime(int n)
  {  
      int r = 0; 
      for(int i = 2; i<= n-1; i++)
  {
      if(n%i ==0)
    { 
        r = 1;
        cout<<" Number is not prime "; 
       break; // whenever get the non prime number break the loop immediately
    } 
  }
   if(r==0){
       
       cout<<"Prime number"<<endl;
   
   }
   return 0;
      
  }

6. What is the take-away message from this bug?

Be careful while writing code or make cross check otherwise you may get unexpected output.

Bug 3

1. The incorrect original code or code snippit that you wrote:

#include<iostream>

using namespace std;

int isprime(int); // function protoype;

int main ()
{
  int n;
  cout<<" Enter the positive integer"<<endl;
  cin>>n; // accepting argument
  isprime(n); // calling the function
  isprime(5); //test cases on every execution test if number is prime or not
  isprime(9);
}
   int isprime(int n)
  {  
      int r = 0; 
      for(int i = 2; i<= n-1; i++)
  {
      if(n%i ==0)
    { 
        r = 1;
        cout<<" Number is not prime "; 
      
    } 
  }
   if(r==0){
       
       cout<<"Prime number"<<endl;
   
   }
   return 0;
      
  }

2. What bug does the original code have?

In if block in 25th line i didnot put break statement.

3. What misunderstanding of C++ concepts lead you to this incorrect code?

Code shows two output for non prime number first number is not prime and second number is prime.

4. How to correct the bug?

Put the break statement after in 25tyh line in if block.

5. The corresponding bug-free code or code snippet is:

#include<iostream>

using namespace std;

int isprime(int); // function protoype;

int main ()
{
  int n;
  cout<<" Enter the positive integer"<<endl;
  cin>>n; // accepting argument
  isprime(n); // calling the function
  isprime(5); //test cases on every execution test if number is prime or not
  isprime(9);
}
   int isprime(int n)
  {  
      int r = 0; 
      for(int i = 2; i<= n-1; i++)
  {
      if(n%i ==0)
    { 
        r = 1;
        cout<<" Number is not prime "; 
       break; // whenever get the non prime number break the loop immediately
    } 
  }
   if(r==0){
       
       cout<<"Prime number"<<endl;
   
   }
   return 0;
      
  }

6. What is the take-away message from this bug?
Check the code again always put every statement.

```
