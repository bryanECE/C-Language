#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double X,Y,Z;
    cout<< "Enter First Side: ";//this line displays the first side of the triangle.
    cin>>X;
    cout<< "Enter Second Side: ";//this line displays the second side of the triangle.
    cin>>Y;
    cout<< "Enter Third Side: ";//this line displays the third side of the triangle.
    cin>>Z;
    
    if (pow(Z , 2) == pow(X , 2)+ pow(Y , 2))
    cout<<"THE TRIANGLE IS A RIGHT TRIANGLE"<<endl;
    else if (pow(X , 2) == pow(Y , 2)+ pow(Z , 2))
    cout<<"THE TRIANGLE IS A RIGHT TRIANGLE"<<endl;
    else if (pow(Y , 2) == pow(X , 2)+ pow(Z , 2))
    cout<<"THE TRIANGLE IS A RIGHT TRIANGLE"<<endl;
    else
    cout<<"It is not a right triangle"<<endl;
    
    system("pause");
    return 0;
}
    
