#include <iostream>

using namespace std;

int reverseDigit(int,int);

int main()
{
    int number;
    
    int n;

    cout << " Enter the number to reverse." <<endl<<endl;
    
    cin >> number;//Displays the number you want to reverse.
    
    cout<< "The reversed number is"<<endl<<endl;//Gives you the reversed number.
    
    cout << reverseDigit((number* 10+ number % 10)/100, number % 10)<<endl<<endl;
    
    system("pause"); 
    
    return 0;

}//end main

int reverseDigit(int number, int n = 0)

{

  if (number == 0)
  {
    return n;
  }
  else
  {
    int nextdigit = number%10;
    int nextprefix = n*10 + nextdigit;
    return reverseDigit(number/10 ,nextprefix);
  }

// Author: Bryan N. Brizo
// Date: November 23, 2013
// Program description: A function that takes an integer as a parameter and returns the number with its digits reversed.

}
