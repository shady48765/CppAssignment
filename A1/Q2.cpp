#include <iostream>

using namespace std;

int main()
{
    float force{172.5};
    float area  {27.5};
    float pressure;
    
    pressure= area/force;
    cout<< " the pressure is "<< pressure <<endl;
    return 0;
    
}
