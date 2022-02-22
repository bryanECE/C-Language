#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int hrs;
float pack1;
float pack2;

void hours1()
{
	cout<<"How many hours did you use it?"<<endl;
	cin>>hrs;
	cout<<endl;
		if(hrs <=200)
		{ 
			cout<<"----->Your Monthly Bill is P400.00"<<endl;
		}
		else 
		{
			cout<<"----->Your Monthly Bill is "<<400+((hrs-200)*30)<<endl;
		}

	system("pause");
}

void hours2()
{
	cout<<"How many hours did you use it?"<<endl;
	cin>>hrs;
	cout<<endl;
	if(hrs <=400)
		{ 
			cout<<"----->Your Monthly Bill is P700.00"<<endl;
		}
		else 
		{
			cout<<"----->Your Monthly Bill is "<<700+((hrs-400)*20)<<endl;
		}

	system("pause");
}

// Main function
int main()
{
	int packageNum;
	
	cout<<"\t\t\t Welcome to Malayan Internet Service Provider(MISP) "<<endl;
	cout<<endl;

	cout<<"Package 1:200 hours of access are provided for P400.00. Exceeding hours costs P30.00 per hour."<<endl;

	cout<<"Package 2:400 hours of access are provided for P700.00. Exceeding hours costs P20.00 per hour."<<endl;

	cout<<"Package 3:Unlimited acess is provided for P999.00."<<endl;

	
	cout<<"\n\n ******What package do you want to avail? ";
	cin>>packageNum;
	

			if(packageNum==1)
			{
				cout<<"Package 1\n\n";
				hours1();

			}

			else if(packageNum==2)
			{
				cout<<"Package 2\n\n";
				hours2();
			}

			else if(packageNum=3)
			{
				cout<<"Package 3\n\n";
				cout<<"The total amout you have to pay is P999.00. "<<endl;
				system("pause");
			}
getch();
}


