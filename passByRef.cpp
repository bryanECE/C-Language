#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

float getArea(float s);
float getArea(float l, float w);


int main()
{
    float side = 0, len = 0, wid = 0;
    int choice = 0;
    char ans = ' ';
    
    do {

    system("cls");
    cout << "\n[1] Area of square\n[2] Area of rectangle\n";
    cout << "Choice: ";
    cin >> choice;
    
    if (choice == 1)
    {
       cout << "Enter side: ";
       cin >> side;
       cout << "Area is: " << getArea(side);
               }
    else if (choice == 2)
    {
         cout << "Enter length: ";
         cin >> len;
         cout << "Enter width: ";
         cin >> wid;
         cout << "Area is: " << getArea(len, wid);
         }
         
         cout << "\nTry another? [y/n]: ";
         cin >> ans;
} while (toupper(ans) == 'Y');
    getch();
    return 0;
    }

float getArea(float s) {
      return (pow(s, 2));
      }
      
float getArea(float l, float w) {
      return (l * w);
      }
