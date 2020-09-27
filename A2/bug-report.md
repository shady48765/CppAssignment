
Bug 1
1. The incorrect original code or code snippit that you wrote:

#include <iostream>
using namespace std;
int main()
{
  int selection;
  cout << "Which formula do you want to see?\n\n";
  cout << "1. Area of a circle\n";
  cout << "2. Area of a rectangle\n";
  cout << "3. Area of a cylinder\n"
  cout << "4. None of them!\n";
  cin >> selection;
  
  switch(selection)
  {
      case 1:
       cout<< " Pi times radius squared\n ";
       break;
      case 2:
       cout<< " Length times width\n";
       break;
      case 3:
       cout<< " Pi times radius sqaured times height\n";
       break;
      case 4:
       cout<< " Okay good bye!\n";
       break;
      default:
       cout<< "Not good with numbers, eh?\n";
  }
}
  



2. What bug does the original code have?
This code does not include ; at the end of the cout statement showing area of cylinder.

3. What misunderstanding of C++ concepts lead you to this incorrect code?
On compiling the code it shows that expected ; token is missing and it clearly indicates the statement with missing statement.

4. How to correct the bug?
I just put the semicolon after the statement and my code get corrected.

5. The corresponding bug-free code or code snippet is:
#include <iostream>
using namespace std;
int main()
{
  int selection;
  cout << "Which formula do you want to see?\n\n";
  cout << "1. Area of a circle\n";
  cout << "2. Area of a rectangle\n";
  cout << "3. Area of a cylinder\n";
  cout << "4. None of them!\n";
  cin >> selection;
  
  switch(selection)
  {
      case 1:
       cout<< " Pi times radius squared\n ";
       break;
      case 2:
       cout<< " Length times width\n";
       break;
      case 3:
       cout<< " Pi times radius sqaured times height\n";
       break;
      case 4:
       cout<< " Okay good bye!\n";
       break;
      default:
       cout<< "Not good with numbers, eh?\n";
  }
}


6. What is the take-away message from this bug?
C++ statements are end with semicolon so one must be careful with it.

Bug 2
1. The incorrect original code or code snippit that you wrote:

#include<iostream>

using namespace std;

intmain()
{
int selection;
cout<<"Please make approptiate selection"<<endl;
cout<<"1. For converting US $ to canadian $"<<endl;
cout<<"2. For converting canadian $ to US $"<<endl;
cin>>selection;

if (selection = = 1)
    {
double US_dollars;
double C_Amount;
cout<<" Enter the amount you want to convert: ";
cin>>US_dollars;
C_Amount = 1.34 * US_dollars;

cout<<" the amount in canadian dollars is "<<C_Amount<<endl;
    }
elseif (selection = = 2)
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
}


2.What bug does the original code have?
The above code is seem to correct but i get two errors in if and else statement i put space between equality operaters.

3.What misunderstanding of C++ concepts lead you to this incorrect code?
the code shows what mistake i had made but i could not get it. It shows expected primary expressions before = token.

4.How to correct the bug?
After thinking i just remove space between them but i was not sure that my program will run successfully.

5. The corresponding bug-free code or code snippet is:
#include<iostream>

using namespace std;

intmain()
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
elseif (selection == 2)
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
}


6. What is the take-away message from this bug?
There must not be space between equality operator.

Bug 3
The incorrect original code or code snippit that you wrote:

#include<iostream>

using namespace std;

intmain()
{
int selection;
cout<<"Please make approptiate selection"<<endl;
cout<<"1. For converting US $ to canadian $"<<endl;
cout<<"2. For converting canadian $ to US $"<<endl;
cin>>selection;

if (selection == 1)
    {
int US_dollars;
double C_Amount;
cout<<" Enter the amount you want to convert: ";
cin>>US_dollars;
C_Amount = 1.34 * US_dollars;

cout<<" the amount in canadian dollars is "<<C_Amount<<endl;
    }
elseif (selection == 2)
    {
int CAD;
double US_Amount;
cout<<" Enter the amount you want to convert: ";
cin>>CAD;
US_Amount = 0.75 * CAD;

cout<<" the amount in US dollars is "<<US_Amount<<endl;

    }
else {
cout<<" This number is not appropriate "<<endl;
    }
}

2. What bug does the original code have?
The code is correct and successfully compile the only mistake there is that CAD and US_dollar variables are initialised by int variable.

3. What misunderstanding of C++ concepts lead you to this incorrect code?
I run the program and enter decimal value it shows me output but when i make cross check of output i find wrong input. then i check the code again and come to know that variabled must be initialized with double type.

3.How to correct the bug?
Just change the data type of variables and i get the correct code.

4.The corresponding bug-free code or code snippet is:
#include<iostream>

using namespace std;

intmain()
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
elseif (selection == 2)
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
}

6. What is the take-away message from this bug?
Always remember to declare correct data type for avoiding run time errors.
