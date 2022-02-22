#include <iostream>

#include <string>

using namespace std;

int main( )

{ 
char d;

int numbers, a, b, c, z;

cout << "Please input a character-->  ";

cin >> d;// This line will display the character used in this program

cout << "Please input a number-->  ";

cin >> numbers;// This line will display the number used in this program

a = numbers - 1;

for (b = 0; b < numbers; ++b) 

{ if (toupper(d) == 'L') 

{ for (z = 0; z < a; ++z) 

{ cout << " "; }

--a; }

if (toupper(d) == 'L' || toupper(d) == 'R')

{ for (c = 0; c < b + 1; ++c) 

{ cout << "X"; }// This line will generate "X" according to what the user will input

cout << endl; 

} 

}

system("pause");

return 0; 

// Author: Bryan N. Brizo
// Date: November 19, 2013
// Program description: The program generates aladder of X wherein the level depends on the number and character that is entered

}


