
BUG 1
Q1. The incorrect original code or code snippit that you wrote:

#include<iostream>

using namespace std;


class Payroll  
 { 
   private: 
     double hours, payrate, Gpay;
    public:
     
     void get_hours (double);
     void get_payrate (double P);
     double gross_pay ()
     {
         Gpay = hours * payrate;
         return Gpay;
     }
 };
 
   
    void Payroll:: get_payrate(double p)
     {
         payrate = p;
     }
      
      void Payroll:: get_hours(double h)
      {
          hours = h;
          
      }
      
     
 
 
 int main() 
 {      int emp[7];
     
      Payroll proll;
   
     
         for( int i =0; i< 7; i++ )
         {  
          cout<< " enter the number of hours worked by employee " <<i+1 <<endl;
         cin>>emp[i];
         if(emp[i]>60)
             { 
                cout<<" please enter valid number of hours worked that is less than 60 "<<endl;
                break;
            }
         proll.get_hours(*emp);
         proll.get_payrate(16.25);
         cout<<" the weekly pay of employee" << i+1 << "is"<< proll.gross_pay() << endl;
         } 
     
     
     
    return 0; 
 }

Q2. What bug does the original code have?

In the above code when ithe get_payrate function was called the argument was passed by dereferncing it. But it shows same pay for evry employee even if he works more hours.

Q3. What misunderstanding of C++ concepts lead you to this incorrect code?

I think that in array we can pass value by dereferncing it but i was wrong array is passed in another way.

Q4. How to correct the bug?

For correcting the remove the derefernce pointer and pass it like emp[i]

Q5. The corresponding bug-free code or code snippet is:

#include<iostream>

using namespace std;


//int i = 0;
class Payroll  
 { 
   private: 
     double hours, payrate, Gpay;
    public:
     
     void get_hours (double);
     void get_payrate (double P);
     double gross_pay ()
     {
         Gpay = hours * payrate;
         return Gpay;
     }
 };
 
   
    void Payroll:: get_payrate(double p)
     {
         payrate = p;
     }
      
      void Payroll:: get_hours(double h)
      {
          hours = h;
          
      }
      
     
 
 
 int main() 
 {      int emp[7];
      
      Payroll proll;
   
     
         for( int i =0; i< 7; i++ )
         {  
          cout<< " enter the number of hours worked by employee " <<i+1 <<endl;
         cin>>emp[i];
         if(emp[i]>60)
             { 
                cout<<" please enter valid number of hours worked that is less than 60 "<<endl;
                break;
            }
         proll.get_hours(emp[i]);
         proll.get_payrate(16.25);
         cout<<" the weekly pay of employee" << i+1 << "is"<< proll.gross_pay() << endl;
         } 
     
     
     
    return 0; 
 }

Q6. What is the take-away message from this bug?

Array and pointer is different concept never mixes both.

Bug 2

Q1. The incorrect original code or code snippit that you wrote:

#include<iostream>

using namespace std;


    class cylinder 
    {
    private:
        double height, radius;
    public:
      void set_values (double, double);
      double getvolume ()
      { 
          return 3.14 * radius * radius * height;
      
      }
  
    }
    
    void cylinder:: set_values ( double r, double h)
    {
        radius = r;
        height = h;
    }
    
  
    int main(){
    
    cylinder cyl;
    cyl.set_values (4.9, 5.7);
    cyl.set_values (5, 3.99);
    cout<<" volume of cylinder is "<<cyl.getvolume();
    return 0;
 
}

Q2. What bug does the original code have?

In the original code terminating statement is missing after the class.

Q3. What misunderstanding of C++ concepts lead you to this incorrect code?

I think like function definition i do not need to put semicolon at the end of the class. But on executing it clearly shows terminating statatemnt is missing.

Q4. How to correct the bug?

just put the semicoln at the end of the class.

Q5. The corresponding bug-free code or code snippet is:

#include<iostream>

using namespace std;


    class cylinder 
    {
    private:
        double height, radius;
    public:
      void set_values (double, double);
      double getvolume ()
      { 
          return 3.14 * radius * radius * height;
      
      }
  
    }
    
    void cylinder:: set_values ( double r, double h)
    {
        radius = r;
        height = h;
    }
    
  
    int main(){
    
    cylinder cyl;
    cyl.set_values (4.9, 5.7);
    cyl.set_values (5, 3.99);
    cout<<" volume of cylinder is "<<cyl.getvolume();
    return 0;
 
}

Q6.  What is the take-away message from this bug?

Classes are always end with semicolon. 

Bug 3


Q1. The incorrect original code or code snippit that you wrote:

#include<iostream>

using namespace std;


    class cylinder 
    {
    private:
        double height, radius;
    public:
      void set_values (double, double);
      double getvolume ()
      { 
          return 3.14 * radius * radius * height;
      
      }
  
    };
    
    void cylinder:: set_values ( double r, double h)
    {
        radius = r;
        height = h;
    }
    
  
    int main(){
    
    cyl.set_values (4.9, 5.7);
    cyl.set_values (5, 3.99);
    cout<<" volume of cylinder is "<<getvolume();
    return 0;
 
}

Q2. What bug does the original code have?

In the original code object of class is not declared that is why getvolume function was not called and it shows that getvolume function is not declared in this scope.

Q3. What misunderstanding of C++ concepts lead you to this incorrect code?

Not misunderstanding but habit of calling function directly without any object for a code without class.

Q4. How to correct the bug?

First of all create an object and then call function with this object.

Q5. The corresponding bug free code goes here

#include<iostream>

using namespace std;


    class cylinder 
    {
    private:
        double height, radius;
    public:
      void set_values (double, double);
      double getvolume ()
      { 
          return 3.14 * radius * radius * height;
      
      }
  
    };
    
    void cylinder:: set_values ( double r, double h)
    {
        radius = r;
        height = h;
    }
    
  
    int main(){
    
    cylinder cyl;
    cyl.set_values (4.9, 5.7);
    cout<<" volume of cylinder is "<<cyl.getvolume();
    cyl.set_values (5, 3.99);
    cout<<" volume of cylinder is "<<cyl.getvolume();
    return 0;
 
}

Q6. What is the take-away message from this bug?

For accesing function of class you must declare an object of that class.
