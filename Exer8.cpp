#include <iostream>

#include <cmath>

#include <cstdlib>

using namespace std;

double saSphere(double r);

double vSphere(double r);

int main()

{

	const double PI = 3.1419;

	double r;

	double v;

	double p;//be the variable of sqrt of pi

	p=sqrt(PI);

	cout<<"The square root of Pi is: "<<p<<endl<<endl;//This displays the square root of PI

	cout<<"Please Enter the radius of the sphere: "<<endl<<endl;

	cin>>r;// Displays the radius inputed in this program

	cout<<"-->The surface area of the sphere is: "<<saSphere(r)<<endl<<endl;// Shows the surface area of the sphere

	cout<<"-->The volume of the sphere is: "<<vSphere(r)<<endl<<endl;// Shows the volume of the sphere

	system("pause");
}
double saSphere(double r)
{
	const double PI = 3.1419;
	return 4*PI*pow(r,2);
}
double vSphere(double r)
{
	const double PI = 3.1419;
	return (4*(PI)*pow(r,3))/3;
	
}
// Author: Bryan N. Brizo
// Date: November 23, 2013
// Program description: 


