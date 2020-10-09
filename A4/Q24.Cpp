
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
      
  }// function will show three outputs on efor user enter value and two for test cases.

