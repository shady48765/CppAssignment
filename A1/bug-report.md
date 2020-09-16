BUG 1
1. The incorrect original code or code snippit that you wrote:
#include<iostream>
  
  int main ()
  {
   int speed {20};
   int time {10};
   
   distance = speed*time;
   cout<< " distance is " << distance << endl
   return 0;
   }

// Online C++ compiler to run C++ online.
// Write C++ code in this online editor and run it.

2. What bug does the original code have?

The above code does not use using namespace std that is the declaration for cout and endl. when i compile the above code with this bug i get 2 errors. The errors show that cout and endl does not declared in this scope.


3. What misunderstanding of C++ concepts lead you to this incorrect code?

when i compile the above code with this bug i get 2 errors. The errors show that cout and endl does not declared in this scope. First i do not get what mistake i had made but i read the whole code again and get my mistake.

4. How to correct the bug?

I just add using namespace std above the code and both of errors get corrected.

5. The corresponding bug-free code or code snippet is:

#include<iostream>

using namespace std;

int main()
{
    int speed {20};
    int time  {10};
    int distance;
    
    distance = speed*time;
    cout<< " the distance is "<< distance <<endl;
    return 0;
    
}

6. What is the take-away message from this bug?
Always write the code carefully to avoid such mistakes.

BUG 2 


1. The incorrect original code or code snippit that you wrote:

#include <iostream>

using namespace std;

int main()
{
    int speed {20};
    int time  {10};
    
    distance = speed*time;
    cout<< " the distance is "<< distance <<endl;
    return 0;
    
}

2. What bug does the original code have?
In this code does not distance variable is not declared.

3. What misunderstanding of C++ concepts lead you to this incorrect code?
This code really very big. Due to this i got 2 errors and 71 warnings. Errors show overload function with no contextual information.

4. How to correct the bug?
it takes very time to got the mistake. On checking twice i get to know that i had not declared the distance variable.


5. The corresponding bug-free code or code snippet is:

#include <iostream>

using namespace std;

int main()
{
    int speed {20};
    int time  {10};
    int distance;
    
    distance = speed*time;
    cout<< " the distance is "<< distance <<endl;
    return 0;
    
}


What is the take-away message from this bug?

first of all, count the variables in question and declared it immediately and check had all variables got declared.


Bug 3
1. The incorrect original code or code snippit that you wrote:

#include <iostream>

using namespace std;

int main()
{
    int speed {20};
    int time  {10};
    int distance;
    
    distance = speed*time;
    cout<< " the distance is "<< distance <<endl //bug is here
    return 0;
    
}

2. What bug does the original code have?

In the above code the cout statement does not have semicolon that must have. 

3. What misunderstanding of C++ concepts lead you to this incorrect code?

Actually on compilation of code it clearly shows that ; is missing before the return. so i get it easily.

4. How to correct the bug?
I just put semicolon and program runs succeefully.

5. The corresponding bug-free code or code snippet is:

#include <iostream>

using namespace std;

int main()
{
    int speed {20};
    int time  {10};
    int distance;
    
    distance = speed*time;
    cout<< " the distance is "<< distance <<endl;
    return 0;
    
}


What is the take-away message from this bug?

Every C++ statement ends up with semicolon so must put it. otherwise code may get executed but shows wrong output.

