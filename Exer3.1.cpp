#include<iostream>
#include<conio.h>
using namespace std;

int hrs;
float pack1(float hrs1);
float pack2(float hrs2);

void hours1()
{
	int hours1; 
    cout<<"How many hours did you use it?"<<endl;
	cin>>hrs;
	cout<<endl;
	cout<<"Monthly Bill: "<<pack1(hours1);
		
	system("pause");
}

void hours2()
{
	cout<<"How many hours did you use it?"<<endl;
	cin>>hrs;
	cout<<endl;
	cout<<"Monthly Bill: "<<pack2(hours2);

	system("pause");
}
float pack1(float hrs1) {
      return (400+((hrs1-200)*30);
      }
      
float pack2(float2) {
      return (700+((hrs2-400)*20);
      }
// Main function
void main()
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

}

getch();
