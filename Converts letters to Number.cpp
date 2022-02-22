#include <iostream>
using namespace std;
int main()
{
	char letter;
	cout<<"Program to convert letters"<<endl<<"to their corresponding"<<endl<<"telephone digits"<<endl<<endl;
	// THIS IS A PROGRAM THAT CONVERTS LETTERS TO NUMBERS
	cout<<"Enter &, to stop the program"<<endl;
	cout<<"Enter a letter: ";
	cin>>letter;// enters any letter
	cout<<endl;
	
	while(letter != '&')
	{
		cout<<"The corresponding digit is: ";//displays the corresponding digit
		if((letter>='A' && letter<='Z') || (letter>='a' && letter<='z'))
		{
			switch (letter)
			{
				case 'A':
				case 'B':
				case 'C':
				case 'a':
				case 'b':
				case 'c':
					cout<< 2 <<endl;
					break;
				
				case 'D':
				case 'E':
				case 'F':
				case 'd':
				case 'e':
				case 'f':
					cout<< 3 <<endl;
					break;
				
				case 'G':
				case 'H':
				case 'I':
				case 'g':
				case 'h':
				case 'i':
					cout<< 4 <<endl;
					break;
				
				case 'J':
				case 'K':
				case 'L':
				case 'j':
				case 'k':
				case 'l':
					cout<< 5 <<endl;
					break;
				
				case 'M':
				case 'N':
				case 'O':
				case 'm':
				case 'n':
				case 'o':
					cout<< 6 <<endl;
					break;
				
				case 'P':
				case 'Q':
				case 'R':
				case 'S':
				case 'p':
				case 'q':
				case 'r':
				case 's':
					cout<< 7 <<endl;
					break;
				
				case 'T':
				case 'U':
				case 'V':
				case 't':
				case 'u':
				case 'v':
					cout<< 8 <<endl;
					break;
				
				case 'W':
				case 'X':
				case 'Y':
				case 'Z':
				case 'w':
				case 'x':
				case 'y':
				case 'z':
					cout<< 9 <<endl;
			}
		}
		else
			{
				cout<<"invalid input..."<<endl;
			}
		
		cout<<endl<<"Enter another letter: ";
		cin>>letter;
		cout<<endl;
	}
	

system("pause");
return 0;
// Author: Bryan N. Brizo
// Date: November 12, 2013
// Program description: Sum of Odd and Even Integers
}
