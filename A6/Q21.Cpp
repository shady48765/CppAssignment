#include<iostream>

using namespace std;


int i = 0;
class Payroll  // defining class payroll
 { 
   private: 
     double hours, payrate, Gpay;
    public:
     
     void get_hours (double); 
     void get_payrate (double P); // accessing private variables of class by public function
     double gross_pay () // function for calculating the total pay
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
 {
      int emp[7]; // creating array
      Payroll proll; // creating object
   
     
         for( int i =0; i< 7; i++ )  // loop for entering working hours of each employee
         {  
          cout<< " enter the number of hours worked by employee " <<i+1 <<endl;
         cin>>emp[i];
         if(emp[i]>60) // checking if there is any condition that is gretaer than 60
             { 
                cout<<" please enter valid number of hours worked that is less than 60 "<<endl;
                break; // break the loop immediately when get value of hours more than 60
            }
         proll.get_hours(emp[i]); // passing value of working hour
         proll.get_payrate(16.25);
         cout<<" the weekly pay of employee" << i+1 << "is"<< proll.gross_pay() << endl; // printing gross pay
         } 
     
     
     
    return 0; 
 }
