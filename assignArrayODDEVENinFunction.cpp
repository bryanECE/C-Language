#include <iostream>
#include <conio.h>

using namespace std;

void countOddEven(int a[], int& odd, int& even);

int main() {
    const int MAXELS = 10;
    int arrNum[MAXELS] = {0};
    
    int i, od = 0, ev = 0;
    
    
    
    countOddEven(arrNum, od, ev);
    
     for (i = 0; i < MAXELS; i++)
    {    cout << arrNum[i] << endl;
    }
    
    getch();
    cout << "There are " << ev << " even nos. and "
         << od << " odd nos.\n";
    getch();
    return 0;
    }
    
void countOddEven(int a[], int& odd, int& even) {
     
     int i, j;
     
     for (i = 0; i < 10; i++)
    {    cout << "Enter value: ";
         cin >> a[i];
    }
    
     for (j = 0; j < 10; j++)
     {
         if ((a[j] % 2) == 0)
            even = even + 1;
         else
            odd = odd + 1;
         }
     }
