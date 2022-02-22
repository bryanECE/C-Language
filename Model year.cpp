#include<iostream>
using namespace std;
int main()
{
    int model_yr,weight; //this line shows the variables used in this model
    cout<<"Enter the year of the model: ";
    cin>>model_yr;// the model year of the car
    cout<<"Enter the car's weight: ";
    cin>>weight;// the weight of the car
    
    if (model_yr <= 1970 && weight < 2700)
    {
    cout<<"Your weight class is 1"<<endl;
    cout<<"Your registration fee is $16.50"<<endl;
    }
    else if (model_yr <= 1970 && weight >= 2700 && weight <= 3800)
    {
    cout<<"Your weight class is 2"<<endl;
    cout<<"Your registration fee is $25.50"<<endl;     
    }  
    else if (model_yr <= 1970 && weight > 3800)
    {
    cout<<"Your weight class is 3"<<endl;
    cout<<"Your registration fee is $46.50"<<endl;     
    }  
    else if (model_yr >= 1971 && model_yr <= 1979 && weight < 2700)
    {
    cout<<"Your weight class is 4"<<endl;
    cout<<"Your registration fee is $27.00"<<endl;     
    }  
    else if (model_yr >= 1971 && model_yr <= 1979 && weight >= 2700 && weight <= 3800)
    {
    cout<<"Your weight class is 5"<<endl;
    cout<<"Your registration fee is $30.50"<<endl;     
    }  
    else if (model_yr >= 1971 && model_yr <= 1979 && weight > 3800)
    {
    cout<<"Your weight class is 6"<<endl;
    cout<<"Your registration fee is $52.50"<<endl;     
    }  
    else if (model_yr >= 1980 && weight < 3500)
    {
    cout<<"Your weight class is 7"<<endl;
    cout<<"Your registration fee is $19.50"<<endl;     
    }  
    else if (model_yr >= 1980 && weight >= 3500)
    {
    cout<<"Your weight class is 8"<<endl;
    cout<<"Your registration fee is $52.50"<<endl;     
    }  
    
system("pause");
return 0;    
}
