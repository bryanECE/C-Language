#include<iostream>
using namespace std;
int main()

{
    int Object,HUNDREDS,FIFTIES,TENS,FIVES,ONES;// this line displays the variables used in this program
    
    cout<<"Enter weight of Object= ";

    cin>>Object;// this line displays the weight of the object
    
    HUNDREDS = Object / 100;
    cout<<"There are/is "<<HUNDREDS<<" HUNDREDS"<<endl;// this line shows the number of HUNDREDS in the weight of the object
    
    FIFTIES = (Object - HUNDREDS* 100) / 50;
    cout<<"There are/is "<<FIFTIES<<" FIFTIES"<<endl;// this line shows the number of FIFTIES in the weight of the object
    
    TENS = (Object - HUNDREDS*100 - FIFTIES*50) /10;
    cout<<"There are/is "<<TENS<<" TENS"<<endl;// this line shows the number of TENS in the weight of the object
    
    FIVES = (Object - HUNDREDS*100 - FIFTIES*50 - TENS*10) / 5;
    cout<<"There are/is "<<FIVES<<" FIVES"<<endl;// this lline shows the number of FIVES in the weight of the object
    
    ONES = (Object - HUNDREDS*100 - FIFTIES*50 - TENS*10 - FIVES*5) / 1;
    cout<<"There are/is "<<ONES<<" ONES"<<endl;// this line shows the number of ONES in the weight of the object
    
    cout<<"Comments:"<<endl<<"Date: October 24,2013"<<endl<<"Author: Bryan N. Brizo"<<endl<<"Program description: To create a program that calculates the number of each type of weight necessary to weigh an object."<<endl;
   
    system("pause");
    
    return 0;
    
}
