#include <iostream>
#include <conio.h>

using namespace std;

float firstNum = 0, secondNum = 0;
float average = 0;
char ans = ' ';

void getInput()
{
       cout << "Enter first number: ";
       cin >> firstNum;
    
       cout << "Enter second number: ";
       cin >> secondNum;
       
       return;

          };
          
void computeAve()
{
    average = (firstNum + secondNum)/2.0;
    return;
     };
     
void printResult()
{
    cout << "The average of the two numbers is " << average << endl;
    return;
     };

int main()
{
    do {
       getInput();
       computeAve();
       printResult();    
           
       cout << endl << "Do you want to try another? [y/n]: ";
       cin >> ans;
    
    } while (ans == 'y');
    getch();
    return 0;
    }
