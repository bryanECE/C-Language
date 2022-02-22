#include <iostream.h>
int main ()
{
 int m_year,weight;
 //Variable names
 cout<<"Enter the year model: ";
 cin>>m_year;
 //Enter year model
 cout<<"Enter the weight of the car: ";
 cin>>weight;
 //Enter weight
 
 if (weight < 2700 && m_year <= 1970)
 {
  cout<<"Your weight class is 1"<<endl;
  cout<<"Your registration fee is $16.50"<<endl;
 }
 else if (weight >= 2700 && weight <= 3800 && m_year <= 1970)
 {
  cout<<"Your weight class is 2"<<endl;
  cout<<"Your registration fee is $25.50"<<endl;
 }
 else if (weight > 3800 && m_year <= 1970)
 {
  cout<<"Your weight calss is 3"<<endl;
  cout<<"Your registration fee is $46.50"<<endl;
 }
 else if (weight < 2700 && m_year > 1970 && m_year < 1980)
 {
  cout<<"Your weight class is 4"<<endl;
  cout<<"Your registration fee is $27.00"<<endl;
 }
 else if (weight >= 2700 && weight <= 3800 && m_year > 1970 && m_year < 1980)
 {
  cout<<"Your weight class is 5"<<endl;
  cout<<"Your registration fee is $30.50"<<endl;
 }
 else if (weight > 3800 && m_year > 1970 && m_year < 1980)
 {
  cout<<"Your weight class is 6"<<endl;
  cout<<"Your registration fee is $52.50"<<endl;
 }
 else if (weight < 3500 && m_year >= 1980)
 {
  cout<<"Your weight class is 7"<<endl;
  cout<<"Your registration fee is $19.50"<<endl;
 }
 else if (weight >= 3500 && m_year >= 1980)
 {
  cout<<"Your weight class is 8"<<endl;
  cout<<"Your registration fee is $52.50"<<endl;
 }
    system("pause");
    return 0;
}
