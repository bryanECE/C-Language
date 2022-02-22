#include<iostream>
using namespace std;
int main()
{
int sumofeven=0,sumofodd=0;

int count;//total inputs

int number;//temporary variable entered by user

cout << "Please input how many numbers you want : ";// displays how many numbers entered

cin >> count;

for(int A=0;A<count;A++)
         {
         cout << "\nPlease enter the number "<< A+1 << " : ";
        
         cin >> number; //if number is "n" add to sum of even numbers.
        
         if(number%2 == 0)
        
         sumofeven = sumofeven + number; //if number is "n" to sum of odd numbers
        
         else
        
         sumofodd = sumofodd + number;
         }
cout << "-->Sum of all even numbers is : " << sumofeven<<endl;

cout << "-->Sum of all odd numbers is : " << sumofodd <<endl;

cout << "*THANK YOU*"<<endl;

system("pause");
return 0;
// Author: Bryan N. Brizo
// Date: November 12, 2013
// Program description: Sum of Odd and Even Integers
}
