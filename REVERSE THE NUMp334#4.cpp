#include <iostream>
using namespace std;

int reverse(int,int);

int main()
{
    int number;
    int n;

    cout << " Enter number to reverse." << endl;
    cin >> number;
    cout << reverse(number % 10,0)<<endl<<endl;
    int reverse(int number, int n = 0)

  if (number == 0)
  {
    return n;
  }
  else
  {
    int nextdigit = number%10;
    int nextprefix = n*10+nextdigit;
    return reverse(number/10 ,nextprefix);
  }


    system("pause");
    return 0;
}//end main

