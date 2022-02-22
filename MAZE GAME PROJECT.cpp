#include <iostream>
#include <ctime>
using namespace std;




int linput;
int see( int path2);
int moi();


int main()
{
srand ( time(NULL) );

int life = 30;
int linput;
int dog = 5;
int progress = 0;
int path;
int trolllevel;

	cout << "You are venturing out on a journey to save the princess.\n";
	cout << "You come across a huge maze of doom!\n";
	cout << "Inside the maze are deadly trolls in ten levels.\n";
	cout << "Rumours of the directions are engraved on the wall.\n";
	cout << "Luckly left is a gamblers game. You could get by easily or bump into a level 10 troll.\n";
	cout << "Whether ravaged right is generally a safe bet. You will find medium trolls here but rarely have luck.\n";
	cout << "You have 30 life points.\n";
	cout << "In combat with trolls you can either run away(losing random life) or...\n";
	cout << "you can kill the troll and take the damage of the troll's level\n";
	
	
	
	for(progress = 0; progress <= 10; progress++)
	{
int bin;
if(life <= 0)
{
goto end;
}

 path = 0;

	cout << "You can turn left or right. What do you choose? 1) left 2) right.\n";
	

cin >> path;
	
	
trolllevel = see(path);

	if(path == 1)
	{

if(trolllevel > 10)
{
cout << "Looks like you didn't bump into a troll luckily!\n";

continue;
}

cout << "There is a level " << trolllevel << " troll.\n";

cout << "Do you want to 1) sprint away or 2) kill the Troll?\n";
cin >> linput;
switch(linput)
{
case 1:
	
bin = moi()	;
	cout << " You get away with " << bin << " damage.\n";
	life = life - bin;
	
cout << "\nYour life is now..." << life << "\n";
break;
case 2:
	cout << " You get away with " << trolllevel << " damage.\n";
life = life - trolllevel;

cout << "\nYour life is now..." << life << "\n";
	
	
	}
	}
	 if(path == 2)
	{

if(trolllevel > 8)
{
cout << "Looks like you didn't bump into a troll luckily!\n";

continue;
}
cout << "There is a level " << trolllevel << " troll.\n";
int linput;

cout << "Do you want to 1) sprint away or 2) kill the Troll?\n";

cin >> linput;
switch(linput)
{
case 1:
	bin = moi();
	
	cout << " You get away with " << bin << " damage.\n";
	life = life - moi();
	
cout << "\nYour life is now..." << life << "\n";
break;
case 2:
	cout << " You get away with " << trolllevel << " damage.\n";
life = life - trolllevel;
cout << "\nYour life is now..." << life << "\n";
};






		
}


	
}

end:
   if(life == 0 || life < 0)
   {
cout << "You died in the maze and so will the princess.\n";
   }
   else
   {
	   cout << "Congratulations you saved the day and probably the princess!\n";
   }
char ran;
cout << "Say goodbye!";
   cin >> ran;
	return 0;
}



int moi()
{
int obssesive = rand() % 10 + 1;
return obssesive;



}


int see(int path2)
{
	int rand2;
	
	switch(path2)
	{
	case 1: 
rand2 = rand() % 12 + 1;
return rand2;
			
		break;

	case 2:
rand2 = rand() %  9 + 3;
return rand2;
		break;
	};
return 0;
}
