#include<iostream>
using namespace std;
int main()
{
    int A,B;// this line displays the variables used in this program
    
    cout<<"Enter size(pounds) of the dog: ";//this line shows the size of the dog.
    
    cin>>A;
    
    cout<<"Enter number of days per month in the contract: ";//this line shows the number of days in the client's contract.
    
    cin>>B;
    
    if ((A<10)&&(A>0)&&(B<=10)&&(B>=1))
    cout<<endl<<" Rate is $12 per day"<<endl<<endl<<"The fee is: $"<<B*12<<endl;
    
    else if ((A<10)&&(A>0)&&(B<=31)&&(B>=11))
    cout<<endl<<" Rate is $10 per day"<<endl<<endl<<"The fee is: $"<<B*10<<endl;
    
    else if ((A<35)&&(A>=10)&&(B<=10)&&(B>=1))
    cout<<endl<<" Rate is $16 per day"<<endl<<endl<<"The fee is: $"<<B*16<<endl;
    
    else if ((A<35)&&(A>=10)&&(B<=31)&&(B>=11))
    cout<<endl<<" Rate is $13 per day"<<endl<<endl<<"The fee is: $"<<B*13<<endl;
    
    else if ((A>=35)&&(B<=10)&&(B>=1))
    cout<<endl<<" Rate is $19 per day"<<endl<<endl<<"The fee is: $"<<B*19<<endl;
    
    else if ((A>=35)&&(B<=31)&&(B>=11))
    cout<<endl<<" Rate is $17 per day"<<endl<<endl<<"The fee is: $"<<B*17<<endl;
   
    system("pause");
   
    return 0;    
// Author: Bryan N. Brizo
// Date: October 29, 2013
// Program description: Calculates and Displays the daily rate and the total for the month
}

