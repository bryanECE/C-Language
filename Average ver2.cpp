#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	double A,B;
	char C;
	do{
		cout<<"Enter first number: "<<endl;// endl; is for skipping to the next line or row
		cin>>A;
		cout<<"Enter second number: "<<endl;
		cin>>B;
		cout<<"Your average is: "<<(A+B)/2<<endl;
		cout<<endl<<endl<<"Do you want to do it again? [y/n]: ";
		cin>>C;
	}
	while(C=='y');// do-while is for repeating
	getch();
	return 0;
}
