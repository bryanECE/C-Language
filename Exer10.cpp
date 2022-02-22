#include <iostream>
#include <cmath>
using namespace std;

void le1();
void le2();
void le3();
void le4();
void le5();
void sp1();
void sp2();
void sp3();
void exit();

int main()

{		
	cout<<" Main Menu"<<endl;//Introduction
	exit (); 
}
void le1()
{
	double Length, Width, Depth, Perimeter, Volume, USA;
	cout<<" Lab Exercise 1"<<endl;
	cout<<" Enter Your Length: ";
	cin>>Length;
	cout<<" Enter Your Width: ";
	cin>>Width;
	cout<<" Enter Your Depth: ";
	cin>>Depth;
	Perimeter=2*(Length+Width);
	cout<<" Your Perimeter is equal to: "<<Perimeter<<endl;
	Volume=Length*Width*Depth;
	cout<<" Your Volume is equal to: "<<Volume<<endl;
	USA=2*(Length+Width)*Depth+Length*Width;
	cout<<" Your Underground Surface Area is equal to: "<<USA<<endl;

}
void le2()
{
    cout<<" Lab Exercise 4"<<endl<<endl;
	
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
    
}
void le3()
{
	cout<<" Lab Exercise 3"<<endl;
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
   
}

void le4()
{
	
	cout<<" Lab Exercise 4"<<endl<<endl;
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
    else if (model_yr >= 1971 && model_yr <= 1979 && weight <= 2700)
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
}
void le5()
{
	int x,NUM,evensum=0,oddsum=0,oddprod=1;// Inputs used in this program

cout << "Please input an integer: "; 

cin >> NUM; // The integer that is entered in this program

cout<<"Even Numbers :"; // Shows the even number of the integer

for (int x=2;x<=NUM;x++) 

{ 

if(x%2==0) 

{ 

cout<<x<<" "; 

evensum+=x; 


} 

} 

cout<<"\n Sum of even Numbers: "<<evensum<<endl; // The sum of all the even numbers in the integer
 
cout<<"Odd Numbers :"; // Shows the odd numbers of the integer

for (x=1;x<=NUM;x++) 

{ 

if(x%2!=0) 

{ 

cout<<x<<" "; 

oddsum+=x; 

oddprod*=x; 

} 

}

cout<<"\n Product of odd Numbers: "<<oddprod<<endl; // The product of all the odd numbers in the integer
}
void sp1()
{
	double one, two;
	cout<<" Sample Problem 1: cin/cout"<<endl;
	cout<<" Enter the two numbers: ";
	cin>>one>>two;
	if (one < two)
	cout<<" The arrangement is: "<<one<<" "<<two<<endl;
	else if (one > two) 
	cout<<" The arrangement is: "<<two<<" "<<one<<endl;
}
void sp2()

{
	char letter;
	cout<<"Program to convert letters"<<endl<<"to their corresponding"<<endl<<"telephone digits"<<endl<<endl;
	// THIS IS A PROGRAM THAT CONVERTS LETTERS TO NUMBERS
	cout<<"Enter &, to stop the program"<<endl;
	cout<<"Enter a letter: ";
	cin>>letter;// enters any letter
	cout<<endl;
	
	while(letter != '&')
	{
		cout<<"The corresponding digit is: ";//displays the corresponding digit
		if((letter>='A' && letter<='Z') || (letter>='a' && letter<='z'))
		{
			switch (letter)
			{
				case 'A':
				case 'B':
				case 'C':
				case 'a':
				case 'b':
				case 'c':
					cout<< 2 <<endl;
					break;
				
				case 'D':
				case 'E':
				case 'F':
				case 'd':
				case 'e':
				case 'f':
					cout<< 3 <<endl;
					break;
				
				case 'G':
				case 'H':
				case 'I':
				case 'g':
				case 'h':
				case 'i':
					cout<< 4 <<endl;
					break;
				
				case 'J':
				case 'K':
				case 'L':
				case 'j':
				case 'k':
				case 'l':
					cout<< 5 <<endl;
					break;
				
				case 'M':
				case 'N':
				case 'O':
				case 'm':
				case 'n':
				case 'o':
					cout<< 6 <<endl;
					break;
				
				case 'P':
				case 'Q':
				case 'R':
				case 'S':
				case 'p':
				case 'q':
				case 'r':
				case 's':
					cout<< 7 <<endl;
					break;
				
				case 'T':
				case 'U':
				case 'V':
				case 't':
				case 'u':
				case 'v':
					cout<< 8 <<endl;
					break;
				
				case 'W':
				case 'X':
				case 'Y':
				case 'Z':
				case 'w':
				case 'x':
				case 'y':
				case 'z':
					cout<< 9 <<endl;
			}
		}
		else
			{
				cout<<"invalid input..."<<endl;
			}
		
		cout<<endl<<"Enter another letter: ";
		cin>>letter;
		cout<<endl;
}	
}
void sp3()
{
	int any;
	int odd;
	int even; 
	int x=2;
	int sum=0;
	int product=1;
	//Substitutes the inputed integers
	cout<<" Sample Problem 3: Loops"<<endl;
	cout<<endl;
	cout<<" Input positive real number: ";//Requires you to input integer
	cin>>any;//Store the inputed data
	cout<<endl;

	if(any<0)//Sets a condition of the stored data if it has negative values
	{
		cout<<" Wrong input!"<<endl;
	}
	
	else if(any==0)//Sets a condition of the stored data is 0
	{
		cout<<" It is an even number"<<endl;
	}
	
	else if((any%2==0 || any%2!=0))//Sets a condition of the stored data whether it has remainder or not
	{
		even=any-1;//Equation for even
		odd=any-even;//Equation for odd
		cout<<" The Odd Numbers are: ";
		do//Loop for displaying odd numbers
		{
			product=product*odd;//Equation for the product
			cout<<odd<<" ";//Displays the odd numbers
			odd=odd+2;//Equation for the next following odd numbers
		}while (odd<=any);//Condition for odd numbers
		
		cout<<endl;
		cout<<" The Even Numbers are: ";
		do
		{
			sum=sum+x;//Equation for the sum
			cout<<x<<" ";//Output the value for x
			x=x+2;//Equation for x
		}while (x<=any);//Condition for x
		cout<<endl;
		cout<<" The Sum of Even Numbers: "<<sum<<endl;//Outputs the sum of even numbers
		cout<<" The Product of Odd Numbers: "<<product<<endl;//Outputs the product of odd numbers
}
	
}

void exit()
{

	int choice1;
	string choice2;
	
while(choice1!=3)
{
	cout<<"\n Menu"<<endl;
	cout<<" '1' for Lab Exercises"<<endl;
	cout<<" '2' for Sample Problems"<<endl;
	cout<<" '3' to exit"<<endl;
	cout<<" Enter your choice: ";
	cin>>choice1;
	cout<<endl;

	if (choice1==1)
	{
	cout<<" Enter the Lab Exercise number (1-5): ";
	cin>>choice2;
	cout<<endl;
	
	if (choice2=="1")
	{
		le1();
	}
	
	else if(choice2=="2")
	{
		le2();
	}

	else if (choice2=="3")
	{
		le3();	
	}
	
	else if (choice2=="4")
	{
		le4();
	}
	else if (choice2=="5")
	{
		le5();
	}
	else 
	{
		exit();
	}
}

else if(choice1==2)
{	cout<<" Enter Sample Problem number (1-3): "; 
	cin>>choice2;
	cout<<endl;
	
	if (choice2=="1")
	{
		sp1();
	}
	
	else if(choice2=="2")
	{
		sp2();
	}
	
	else if(choice2=="3")
	{
		sp3();
	}
	else 
	{
		system("pause");
        exit();
	}
}
}
}

