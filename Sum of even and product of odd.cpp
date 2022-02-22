#include <iostream> 

using namespace std;

int main() 

{ 

int x,NUM,evensum=0,oddsum=0,oddprod=1;// Inputs used in this program

cout << "Please input an integer: "; 

cin >> NUM; // The integer that is entered in this program

cout<<"Even Numbers :"; // Shows the even number of the integer

for (int x=2;x<=NUM;x++) 

{ 

if(x%2==0) 

{ 

cout<<x<<" "; 

evensum+=x; 


} 

} 

cout<<"Sum of even Numbers: "<<evensum<<endl; // The sum of all the even numbers in the integer
 
cout<<"Odd Numbers :"; // Shows the odd numbers of the integer

for (x=1;x<=NUM;x++) 

{ 

if(x%2!=0) 

{ 

cout<<x<<" "; 

oddsum+=x; 

oddprod*=x; 

} 

}

cout<<"\n Product of odd Numbers: "<<oddprod<<endl; // The product of all the odd numbers in the integer

system("pause");

return 0; 

// Author: Bryan N. Brizo
// Date: November 14, 2013
// Program description: Displays te odd, odd product, even and even sum numbers on that integer.
}
