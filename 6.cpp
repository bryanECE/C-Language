#include <iostream>
using namespace std;
int main()
{
       int average;
       double number1 = 0.0;
       double number2 = 0.0;
       double number3 = 0.0;
       cout << "Enter 3 numbers!" << endl;
       cin >> number1;
       cin >> number2;
       cin >> number3;
       
       average =(number1 + number2 + number3) /3;
              
       cout<< " Your average is:"<<average<<endl;
       
       system("PAUSE");
       return 0;
}
