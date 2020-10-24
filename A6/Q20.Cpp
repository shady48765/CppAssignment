
#include<iostream>

using namespace std;


    class cylinder // defining  a class
    {
    private:
        double height, radius;
    public:
      void set_values (double, double);
      double getvolume ()
      { 
          return 3.14 * radius * radius * height; // calculating volume of cylinder in class as we cannot access private function outside of class
      
      }
  
    };
    
    void cylinder:: set_values ( double r, double h) // accessing the private variables of class by public function
    {
        radius = r;
        height = h;
    }
    
  
    int main(){
    
    cylinder cyl; // creating object of class
    cyl.set_values (4.9, 5.7); // testing case
    cyl.set_values (5, 3.99);
    cout<<" volume of cylinder is "<<cyl.getvolume();
    return 0;
 
}
