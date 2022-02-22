#include<iostream>
using namespace std;
int main() {
	double x, y;
	cout<<" Input 1st number: "<<endl;
	cin>>x;
	cout<<" Input 2nd number: "<<endl;
	cin>>y;
	
	cout<< "Sum is: "<<x+y<<endl;
	cout<< "Difference is: "<<x-y<<endl;
	cout<< "Product is: "<<x*y<<endl;
	cout<< " Quotient is: "<<(float)x/y<<endl;// ok if without float, use it when double is changed to int fnction
	system("pause");
	return 0;
		
}
