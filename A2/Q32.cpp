
#include<iostream>

using namespace std;

int main()
{
int selection;
cout<<"Please make approptiate selection"<<endl;
cout<<"1. For converting US $ to canadian $"<<endl;
cout<<"2. For converting canadian $ to US $"<<endl;
cin>>selection;

if (selection == 1)
    {
double US_dollars;
double C_Amount;
cout<<" Enter the amount you want to convert: ";
cin>>US_dollars;
C_Amount = 1.34 * US_dollars;

cout<<" the amount in canadian dollars is "<<C_Amount<<endl;
    }
else if (selection == 2)
    {
double CAD;
double US_Amount;
cout<<" Enter the amount you want to convert: ";
cin>>CAD;
US_Amount = 0.75 * CAD;

cout<<" the amount in US dollars is "<<US_Amount<<endl;

    }
else {
cout<<" This number is not appropriate "<<endl;
    }
    return 0;
}
