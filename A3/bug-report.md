BUG 1
1. The incorrect original code or code snippit that you wrote:

#include <iostream>
using namespace std;

int main()
{
	int numStudents, i;
	float numHours, total, average;
	int student, day = 0;	

	cout << "This program will find the average number of hours a day"
		 << " that a student spent programming over a long weekend\n\n";
	cout << "How many students are there ?" << endl << endl;
	cin >> numStudents;
    cout<< " enter the number of days in a long weekend student study "<<endl;
    cin>>day;
    

	for (student = 1; student <= numStudents; student++)
	{
		total = 0;
		for (i = 1; i <= day; day++)
		{
			cout << "Please enter the number of hours worked by student "
				 << student << " on day " << i << "." << endl;
			cin >> numHours;

			total = total + numHours;
		}

		average = total / day;

		cout << endl;
		cout << "The average number of hours per day spent programming by "
			 << "student " << student << " is " << average
			 << endl << endl << endl;
	}

	return 0;
}
2. What bug does the original code have?

The original code have a silly bug that completely mess up with whole source code. Actually in the for loop for third increment expression instead of incrementing (i) I mistakenly put day.

3. What misunderstanding of C++ concepts lead you to this incorrect code?

I mistakenly made a silly mistake.

4. How to correct the bug?

I just change the third expression of for loop and put i.

5. The corresponding bug-free code or code snippet is:

#include <iostream>
using namespace std;

int main()
{
	int numStudents, i;
	float numHours, total, average;
	int student, day = 0;	// these are the counters for the loops

	cout << "This program will find the average number of hours a day"
		 << " that a student spent programming over a long weekend\n\n";
	cout << "How many students are there ?" << endl << endl;
	cin >> numStudents;
    cout<< " enter the number of days in a long weekend student study "<<endl;
    cin>>day;
    

	for (student = 1; student <= numStudents; student++)
	{
		total = 0;
		for (i = 1; i <= day; i++)
		{
			cout << "Please enter the number of hours worked by student "
				 << student << " on day " << i << "." << endl;
			cin >> numHours;

			total = total + numHours;
		}

		average = total / day;

		cout << endl;
		cout << "The average number of hours per day spent programming by "
			 << "student " << student << " is " << average
			 << endl << endl << endl;
	}

	return 0;
}

6. What is the take-away message from this bug?

Be careful while doing programming a little mistake may destroy your results and you may receive unexpected outputs.

Bug 2

1. The incorrect original code or code snippit that you wrote:

#include <iostream>
using namespace std;

int main()
{
	int numStudents, i;
	float numHours, B_average, P_average;
	int student, day = 0;	// these are the counters for the loops

	cout << "This program will find the average number of hours a day"
		 << " that a student spent programming or biology over a long weekend\n\n";
	cout << "How many students are there ?" << endl << endl;
	cin >> numStudents;
    for (student = 1; student <= numStudents; student++)
	{   
        float B_Hours, P_Hours;
		 float B_total = 0, P_total= 0; 
     cout<< " enter the number of days in a long weekend student study "<<endl;
    cin>>day;
     
		for (i = 1; i <= day; i++)
		{
			cout << "Please enter the number of hours spent in Biology by student  "
				 << student << " on day " << i << "." << endl;
			cin >> B_Hours;
            B_total = B_total + B_Hours;
            
            cout <<" enter the number of hours spent in Programming by student "
                 << student << " on day " << i << "." <<endl;
            cin>> P_Hours;
            P_total = P_total + P_Hours;
            
		}

		B_average = B_total / day;
        P_average = P_total / day;
        if (B_average > P_average)
        { 
            cout << " more time is spent on biology by student "<< student <<endl;
        }
        else if ( B_average == P_average )
        { 
            cout<< " equal time is spent on both biology and programming by student " << student <<endl;
        }
        else
            cout << " more time is spent on programming by student "<<student <<endl;

	
	}

	return 0;
}

2. What bug does the original code have?

According to syntax the program is correct but in output it ask number of days for studying in long weekend for each student but i want that it ask once not everytime.

3. What misunderstanding of C++ concepts lead you to this incorrect code?

Actually i got confuse while using for loop and write the statement inside the loop.

4. How to correct the bug?

I remove the cout statement from loop and write it before the loop.

5. The corresponding bug-free code or code snippet is:

#include <iostream>
using namespace std;

int main()
{
	int numStudents, i;
	float numHours, B_average, P_average;
	int student, day = 0;	// these are the counters for the loops

	cout << "This program will find the average number of hours a day"
		 << " that a student spent programming or biology over a long weekend\n\n";
	cout << "How many students are there ?" << endl << endl;
	cin >> numStudents; 
    cout<< " enter the number of days in a long weekend student study "<<endl;
    cin>>day;
    
	for (student = 1; student <= numStudents; student++)
	{   
        float B_Hours, P_Hours;
		 float B_total = 0, P_total= 0;
		for (i = 1; i <= day; i++)
		{
			cout << "Please enter the number of hours spent in Biology by student  "
				 << student << " on day " << i << "." << endl;
			cin >> B_Hours;
            B_total = B_total + B_Hours;
            
            cout <<" enter the number of hours spent in Programming by student "
                 << student << " on day " << i << "." <<endl;
            cin>> P_Hours;
            P_total = P_total + P_Hours;
            
		}

		B_average = B_total / day;
        P_average = P_total / day;
        if (B_average > P_average)
        { 
            cout << " more time is spent on biology by student "<< student <<endl;
        }
        else if ( B_average == P_average )
        { 
            cout<< " equal time is spent on both biology and programming by student " << student <<endl;
        }
        else
            cout << " more time is spent on programming by student "<<student <<endl;

	
	}

	return 0;
}

6. What is the take-away message from this bug?

whatever you write inside loop statement will count or print each time loop executed so be careful while writing a loop.

Bug 3

1.The incorrect original code or code snippit that you wrote:

#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main()
{
    //declaring the time variable
    int spaces = 0, letters = 0;
    string sentence, word, wordStageTwo, shuffledWord;
    char ch, upCh, littleSpace, firstLetter;
    vector<string> wordsArray, shuffled;
    vector<char> wordChar;

    //asking for the input
    cout << "Enter the sentence here: ";
    cin>>sentence;

    //adding space at last of the accepted string
    littleSpace = ' ';
    sentence.push_back(littleSpace);

    //looping through the sentence and adding word to the vector array
    for (int i = 0; i < sentence.length(); ++i) {
        char ch = sentence[i];

        if (ch == ' ') {
            word = sentence.substr((i - letters), letters);
            wordsArray.push_back(word);
            letters = 0;
        }
        else if (ch != ' ') {
            ++letters;
        }
    }

    //looping through the wordArray vector
    for (int i = 0; i < wordsArray.size(); ++i) {
        wordStageTwo = wordsArray.at(i);

        //adding every character of the word of a vector
        for (int y = 0; y < wordStageTwo.length(); ++y) {
            upCh = toupper(wordStageTwo[y]);
            wordChar.push_back(upCh);
        }

        //saving the first letter in a variable
        firstLetter = wordChar[0];

        //deleting the first letter from the vector
        wordChar.erase(wordChar.begin());

        //adding first letter to the last position
        wordChar.push_back(firstLetter);

        //joining the words
        for (int z = 0; z < wordChar.size(); ++z) {
            shuffledWord += wordChar[z];
        }

        //adding KPU at the last of the word
        shuffledWord += "KPU";

        //adding the last iteration of the word to final vector
        shuffled.push_back(shuffledWord);

        //Clearing the vectors, making space for the next word
        shuffledWord = "";
        wordChar.clear();
    }

    //displaying the shuffled words
    for (int v = 0; v < shuffled.size(); ++v) {
        cout << shuffled[v] << " ";
    }

}

2. What bug does the original code have?

In the above code i entered cin for reading a sentence.

3. What misunderstanding of C++ concepts lead you to this incorrect code?

I think that like other statement we can read a string by cin but i forget that cin is not able to read sentence after space.

4. How to correct the bug?

Simply put the getline function instead of cin statement.

5.The corresponding bug-free code or code snippet is:


#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main()
{
    //declaring the time variable
    int spaces = 0, letters = 0;
    string sentence, word, wordStageTwo, shuffledWord;
    char ch, upCh, littleSpace, firstLetter;
    vector<string> wordsArray, shuffled;
    vector<char> wordChar;

    //asking for the input
    cout << "Enter the sentence here: ";
    getline(cin, sentence);

    //adding space at last of the accepted string
    littleSpace = ' ';
    sentence.push_back(littleSpace);

    //looping through the sentence and adding word to the vector array
    for (int i = 0; i < sentence.length(); ++i) {
        char ch = sentence[i];

        if (ch == ' ') {
            word = sentence.substr((i - letters), letters);
            wordsArray.push_back(word);
            letters = 0;
        }
        else if (ch != ' ') {
            ++letters;
        }
    }

    //looping through the wordArray vector
    for (int i = 0; i < wordsArray.size(); ++i) {
        wordStageTwo = wordsArray.at(i);

        //adding every character of the word of a vector
        for (int y = 0; y < wordStageTwo.length(); ++y) {
            upCh = toupper(wordStageTwo[y]);
            wordChar.push_back(upCh);
        }

        //saving the first letter in a variable
        firstLetter = wordChar[0];

        //deleting the first letter from the vector
        wordChar.erase(wordChar.begin());

        //adding first letter to the last position
        wordChar.push_back(firstLetter);

        //joining the words
        for (int z = 0; z < wordChar.size(); ++z) {
            shuffledWord += wordChar[z];
        }

        //adding KPU at the last of the word
        shuffledWord += "KPU";

        //adding the last iteration of the word to final vector
        shuffled.push_back(shuffledWord);

        //Clearing the vectors, making space for the next word
        shuffledWord = "";
        wordChar.clear();
    }

    //displaying the shuffled words
    for (int v = 0; v < shuffled.size(); ++v) {
        cout << shuffled[v] << " ";
    }

}

6. What is the take-away message from this bug?

sentences are read by getline function and we cannot read them by cin.
