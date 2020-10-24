
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
    cyl.set_values (5, 3.99);
    cout<<" volume of cylinder is "<<cyl.getvolume();
    return 0;
 
}
