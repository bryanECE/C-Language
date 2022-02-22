#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float firstNum = 0, secondNum = 0;
    float average = 0;
    char ans = ' ';
    
    do {
    
       cout << "Enter first number: ";
       cin >> firstNum;
    
       cout << "Enter second number: ";
       cin >> secondNum;
    
       average = (firstNum + secondNum)/2.0;
    
       cout << "The average of the two numbers is " << average << endl;
       
       cout << endl << "Do you want to try another? [y/n]: ";
       cin >> ans;
    
    } while (ans == 'y');
    getch();
    return 0;
    }
