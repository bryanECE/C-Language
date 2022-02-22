#include<iostream>
using namespace std;

void about();
void ulamsequence();
void exit();

int main()
{
    cout<<" COMMENTS: "<<endl<<endl<<" Author: Bryan N. Brizo"<<endl<<"Date: December 10, 2013"<<endl<<"Description:A program that will allow user to select from the following menu options"<<endl;
   	cout<<" Main Menu"<<endl;//Introduction
    exit();
}
void about()
{
     cout<<"\n *ABOUT* "<<endl<<endl;
     cout<<" Bryan N. Brizo "<<endl;
     cout<<" Student #: 2013170402 "<<endl;
     cout<<" Date: December 12, 2013"<<endl;
}
void ulamsequence()
{
     int n;
     int even;
     int odd;
     cout<<"\n *Ulam Sequence* "<<endl<<endl;
     
     cout<<"Input a positive integer: "<<endl;
     cin>>n;
    
     if(n<0)//Sets a condition of the stored data if it has negative values
	 {
		cout<<" STOP!"<<endl;
	 }
	 else if(n==2)//Sets a condition of the stored data is 0
     {
     cout<<" It is an even number"<<endl;
     }
 	 else if((n%2==0 || n%2!=0))
 	 	{
		even= odd/2;//Equation for even
		odd= 3*n + 1;//Equation for odd
		cout<<" An input of "<<n<<" "<<endl<<"gives ->"<<odd<<"-> "<<even<<endl;
		{
      
}
void exit();
{
	int choice1;
	string choice2;
	
while(choice1!=3)
{
	cout<<"\n Menu"<<endl;
	cout<<" '1' for About"<<endl;
	cout<<" '2' for Ulam Sequence"<<endl;
	cout<<" '3' to Exit"<<endl;
	cout<<" Enter your choice: ";
	cin>>choice1;
	cout<<endl;

	if (choice1==1)
	{
	    about();
    }
	else 
	{
		exit();
	}
}

    if(choice1==2)
    {
         ulamsequence(); 
    }
	
	else 
	{
		system("pause");
        exit();
	}
}
}
}

