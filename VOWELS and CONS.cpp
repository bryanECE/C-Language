#include <iostream>
using namespace std;
int main()
{
	string x,v;
    cout<<" INPUT A LETTER AND IT ILL STATE TRUE IF VOWEL AND FALSE IF NOT";
    cout<<endl<<endl<<endl;
	cout<<"Enter the Letter: ";

	cin>>x;
	
    v = isVowel (x);
    cout<<endl;
	cout<<"The value is: "<<v<<endl;

	return 0;
}

string isVowel(string y)

{
	string a;
	
    if ((y == "a")||(y == "e")||(y == "i")||(y == "o")||(y == "u")||(y == "A")||(y == "E")||(y == "I")||(y == "O")||(y == "U"))
	
    a = "True";
	
    else
	
	a = "False";
	
	system("pause");
	return a;

// Author: Bryan N. Brizo
// Date: November 21, 2013
// Program description: Value-returning function that returns the value if a given character is a vowel and otherwise.
}


