#include <iostream>
#include <conio.h>
#include <ctime>
#include <iomanip>
#include <windows.h>
using namespace std;
//startup voids
void display();
void display2();
void game1();
void game2();
int a;
//game 1 ints
int linput;
int see( int path2);
int moi();
//game 2 commands
bool restrict();
void l0();
void l1();
void l2();
void l3();
void l4();
void l5();
void l6();
void l7();
void u0();
void u8();
void u7();
void u6();
void u5();
void u4();
void u3();
void u2();
void wait(long seconds);

//main
int main()
{
	display();
	system("cls");
	display2();
	switch(a)
	{
	case 1: system("cls");
			cout<<"Initializaing....";
			system("cls");
			game1();
			getch();break;
	case 2: system("cls");
			cout<<"Initializaing....";
			system("cls");
			game2();
			getch();break;

	}
	system("cls");
	cout<<"Thank you for playing!";
}


void display()
{

	cout<<" ####    ####   #     #  #####   "<<endl;
	cout<<"#       #    #  ##   ##  #"<<endl;
	cout<<"# ####  ######  # # # #  #####"<<endl;
	cout<<"#    #  #    #  #  #  #  #"<<endl;
	cout<<" ####   #    #  #     #  #####"<<endl<<endl;
	cout<<"#####    #####   #    #"<<endl;
	cout<<"#    #  #     #   #  #"<<endl;
	cout<<"#####   #     #    ##"<<endl;
	cout<<"#    #  #     #   #  #"<<endl;
	cout<<"#####    #####   #    #"<<endl<<endl;
	cout<<" #######     #######"<<endl;
	cout<<"#  #    #####   O   #"<<endl;
	cout<<"# ###    :::  O   O #"<<endl;
	cout<<"#  #            O   #"<<endl;
	cout<<"#       #####       #"<<endl;
	cout<<" #######     #######"<<endl<<endl<<endl;
	cout<<"Initializing.....";
	getch();
}

void display2()
{
	cout<<"################################"<<endl;
	cout<<"# Welcome to GAME BOX v2.0     #"<<endl;
	cout<<"#                              #"<<endl;
	cout<<"# blah blah blah description   #"<<endl;
	cout<<"# description                  #"<<endl;
	cout<<"#                              #"<<endl;
	cout<<"# Game Menu:                   #"<<endl;
	cout<<"# 1. LONG MAZE                 #"<<endl;
	cout<<"# 2. MAZE CRAZE                #"<<endl;
	cout<<"################################"<<endl<<endl<<endl;
	cout<<"Enter the number correspoding to the game"<<endl;
	cout<<"Select a game: ";
	cin>>a;

}

char inputKey;
int mapArrayOne [25][33] =
{
 {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
 {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,0,1},
 {1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1,0,0,0,1,0,0,0,1},
 {1,0,1,0,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,1,0,1},//5
 {1,0,0,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1},
 {1,1,0,1,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,1,0,1,1,0,0,0,0,0,0,0,0,1},
 {1,0,0,1,0,1,1,0,1,0,0,1,0,0,1,1,1,1,0,0,1,0,0,1,0,0,1,1,1,1,0,0,1},
 {1,0,1,1,0,1,0,0,1,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,1,0,0,1,0,0,1},
 {1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1},//10
 {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1},
 {1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,0,0,1},
 {1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1},
 {1,1,0,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1},
 {1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//15
 {1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,0,1,0,1},
 {1,0,0,1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,1},
 {1,0,1,0,0,1,0,1,0,1,1,1,0,1,1,1,0,1,0,1,1,1,1,1,0,1,0,1,1,1,1,0,1},//
 {1,0,1,0,1,0,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,1,0,0,0,0,1},
 {1,0,1,0,0,0,0,1,1,1,0,1,0,1,0,1,0,1,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1},//20
 {1,0,0,1,0,1,0,1,0,0,0,0,0,1,0,1,0,1,0,0,0,1,0,1,1,1,1,1,0,0,0,0,1},
 {1,1,0,1,0,1,1,1,1,1,1,1,1,1,0,1,0,1,0,1,1,1,0,1,0,0,0,1,1,1,1,0,1},
 {1,0,0,1,0,1,0,0,0,0,1,0,0,1,1,1,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,0,1},
 {1,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,1},
 {1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},//25
};

void drawMaze();
void gotoXY(int, int);
void movement();
void win();

void game1()
{
    drawMaze();

    movement();

    system("PAUSE");

}

void drawMaze()
{
   for(int counter=0; counter<25; counter++)
    {
        for(int newCounter=0;newCounter<33; newCounter++)
        {
            switch(mapArrayOne[counter][newCounter])
            {
            case 0:
                cout<<" ";
                break;
            case 1:
                cout<<char(219);
                break;
            case 2:
                cout<<" ";

                break;
            }
        }
        cout<<" "<<endl;

}

}
void gotoXY(int x, int y)
{
COORD coord;
coord.X= x;
coord.Y= y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void movement()
{
    int x=1;
    int y=1;
    int xBefore= 1;
    int yBefore= 1;

    while(true)
    {
        gotoXY(xBefore, yBefore);
        cout<<" ";

        gotoXY(x,y);
        cout<<"X";

        inputKey =_getch();
        xBefore= x;
        yBefore= y;

        if(inputKey == 'w')
            y -= 1;
        else if(inputKey == 's')
            y += 1;
        else if(inputKey == 'd')
            x += 1;
        else if(inputKey == 'a')
            x -=1;

        if (mapArrayOne[y][x] ==1)
        {
            x=xBefore;
            y=yBefore;

        }
    }
}


//end of outside commands for game 1

void game2()
{
	int x,y,m,s,time;
	char z;
	x=1;
	y=1;
	m=0;
	clock_t init, final;



	cout<<"M     M     MMM     MMMMMMM  MMMMMMM"<<endl;
	cout<<"MM   MM    M   M    M    M   MM"<<endl;
	cout<<"M  M  M   MMMMMMM     MM     MMMM"<<endl;
	cout<<"M     M  M       M   M    M  MM"<<endl;
	cout<<"M     M  M       M  MMMMMMM  MMMMMMM"<<endl;
	cout<<"%%%%%%  %%%%%%   %%%   %%%%%%  %%%%%"<<endl;
	cout<<"%       %    %  %   %      %   %"<<endl;
	cout<<"%       %%%%%   %%%%%    %     %%%%%"<<endl;
	cout<<"%       %   %%  %   %   %      %"<<endl;
	cout<<"%%%%%%  %   %%  %   %  %%%%%%  %%%%%"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
    cout<<"STORY OF THE GAME";
	cout<<""<<endl;
	cout<<" A man trap is trap in cave.But this is not an ordinary cave";
	cout<<""<<endl;
	cout<<" This is cave is full of unknown danger. it is full of deadly";
	cout<<""<<endl;
	cout<<" BOOMS Help the man to get out of the cave without passing the";
	cout<<""<<endl;
	cout<<" BOOMS in order to live.";
	cout<<"\nRemember the location of the bombs and\nget to the goal without stepping on a bomb\n";
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"A -Player       Input:    W  - to go Up"<<endl;
	cout<<"0 -Goal                   S  - to go Down"<<endl;
	cout<<"% -Bombs                  A  - to go Left"<<endl;
	cout<<"                          D  - to go Right"<<endl;
	cout<<"X -Walls"<<endl;
	cout<<". -Path"<<endl;
	cout<<endl;
	cout<<"Enter 'P' To start the game";
	cin>>z;

	if(z=='P' || z=='p')
	{
	system("cls");

	cout<<"  12345678      The         You"<<endl;
	cout<<" XXXXXXXXXX    Bomb         Have "<<endl;
	cout<<"1XA...%..%X   Locations     15"<<endl;
	cout<<"2XX.#...%.X               Seconds "<<endl;
	cout<<"3XX.#.#..XX                 to"<<endl;
	cout<<"4X%.#.%.X.X   Remember     Memorize"<<endl;
	cout<<"5XX.XXX..%X     This         as"<<endl;
	cout<<"6X..X...XXX      to         Much"<<endl;
	cout<<"7X.XX.X...X     win          as"<<endl;
	cout<<"8X%....X0X                  you"<<endl;
	cout<<" XXXXXXXXXX                 can"<<endl;

	wait(10);

	system("cls");
	init=clock();
	cout<<"  12345678       LET        GOOD"<<endl;
	cout<<" XXXXXXXXX      THE        LUCK"<<endl;
	cout<<"1XA.......X      GAME        ..."<<endl;
	cout<<"2XX.X.....X      BEGIN"<<endl;
	u3();

	}

	cell:
	{
	cout<<"\nInput: ";
	cin>>z;
	if(z=='s' ||z=='S' || z=='W' || z=='w' || z=='a' || z=='A' || z=='d' || z=='D')
	{
		m=m+1;

	}
	if (z=='a' || z=='A')
	{
		x=x-1;
		if ((x==1 && y==2)||(x==1 && y==3)||(x==1 && y==5)||(x==3 && y==2)||(x==3 && y==3)||
			(x==3 && y==4)||(x==3 && y==5)||(x==3 && y==6)||(x==2 && y==7)||(x==5 && y==3)||
			(x==5 && y==5)||(x==5 && y==7)||(x==4 && y==5)||(x==5 && y==3)||(x==7 && y==4)||
			(x==7 && y==6)||(x==7 && y==8)||(x==8 && y==3))
			{
				x=x+1;
			}
	}
	else if (z=='d' || z=='D')
	{
		x=x+1;
		if ((x==3 && y==2)||(x==3 && y==3)||(x==3 && y==4)||(x==3 && y==5)||(x==3 && y==6)||
			(x==2 && y==7)||(x==5 && y==3)||(x==5 && y==7)||(x==7 && y==4)||(x==7 && y==6)||
			(x==7 && y==8)||(x==8 && y==3))
			{
				x=x-1;
			}

	}
	else if (z=='w' || z=='W')
	{
		y=y-1;
		if ((x==1 && y==2)||(x==2 && y==7)||(x==3 && y==7)||(x==5 && y==7)||(x==8 && y==6)||
			(x==7 && y==6)||(x==5 && y==5)||(x==4 && y==5)||(x==1 && y==5)||(x==7 && y==4)||
			(x==1 && y==3)||(x==5 && y==3)||(x==3 && y==3)||(x==8 && y==3))
			{
				y=y+1;
			}
	}
	else if (z=='s' || z=='S')
	{
		y=y+1;
		if ((x==1 && y==2)||(x==3 && y==2)||(x==5 && y==3)||(x==7 && y==4)||(x==4 && y==5)||
			(x==1 && y==5)||(x==7 && y==6)||(x==7 && y==8)||(x==8 && y==6)||(x==2 && y==7)||
			(x==5 && y==7)||(x==8 && y==3))
					{
						y=y-1;
					}

	}

	if (x<=0)
	{
		x=1;
	}

	if (y<=0)
	{
		y=1;
	}
	if (x>=9)
	{
		x=8;
	}

	if (y>=9)
	{
		y=8;
	}


	system("cls");

	if (y==1)
	{
		l0();
		if (x==1)
		{
			cout<<"1XA.......X"<<endl;
		}
		else if(x==2)
		{
			cout<<"1X.A......X"<<endl;
		}
		else if(x==3)
		{
			cout<<"1X..A.....X"<<endl;
		}
		else if(x==4)
		{
			cout<<"1X...A....X"<<endl;
		}
		else if(x==5)
		{
			cout<<"1X....%...X"<<endl;
		}
		else if(x==6)
		{
			cout<<"1X.....A..X"<<endl;
		}
		else if(x==7)
		{
			cout<<"1X......A.X"<<endl;
		}
		else if(x==8)
		{
			cout<<"1X.......%X"<<endl;
		}
	u2();
	}


	else if (y==2)
	{
		l1();
		if (x==2)
		{
			cout<<"2XXAX.....X"<<endl;
		}
		else if (x==4)
		{
			cout<<"2XX.XA....X"<<endl;
		}
		else if (x==5)
		{
			cout<<"2XX.X.A...X"<<endl;
		}
		else if (x==6)
		{
			cout<<"2XX.X..A..X"<<endl;
		}
		else if (x==7)
		{
			cout<<"2XX.X...%.X"<<endl;
		}
		else if (x==8)
		{
			cout<<"2XX.X....AX"<<endl;
		}
		u3();
	}

	else if(y==3)
	{
		l2();
		if (x==2)
		{
			cout<<"3XXAX.X..XX"<<endl;
		}
		else if (x==4)
		{
			cout<<"3XX.XAX..XX"<<endl;
		}
		else if (x==6)
		{
			cout<<"3XX.X.XA.XX"<<endl;
		}
		else if (x==7)
		{
			cout<<"3XX.X.X.AXX"<<endl;
		}
		u4();
	}

	else if (y==4)
	{
		l3();
		if(x==1)
		{
			cout<<"4X%.X...X.X"<<endl;
		}
		else if(x==2)
		{
			cout<<"4X.AX...X.X"<<endl;
		}
		else if(x==4)
		{
			cout<<"4X..XA..X.X"<<endl;
		}else if(x==5)
		{
			cout<<"4X..X.%.X.X"<<endl;
		}else if(x==6)
		{
			cout<<"4X..X..AX.X"<<endl;
		}else if(x==8)
		{
			cout<<"4X..X...XAX"<<endl;

		}
		u5();
	}
	else if (y==5)
	{
		l4();
		if (x==2)
		{
			cout<<"5XXAXXX...X"<<endl;
		}
		else if (x==6)
		{
			cout<<"5XX.XXXA..X"<<endl;
		}
		else if (x==7)
		{
			cout<<"5XX.XXX.A.X"<<endl;
		}
		else if (x==8)
		{
			cout<<"5##.###..@#"<<endl;
		}
		u6();
	}
	else if (y==6)
	{
		l5();
		if (x==1)
		{
			cout<<"6XA.X...XXX"<<endl;
		}
		else if (x==2)
		{
			cout<<"6X.AX...XXX"<<endl;
		}
		else if (x==4)
		{
			cout<<"6X..XA..XXX"<<endl;
		}
		else if (x==5)
		{
			cout<<"6X..X.A.XXX"<<endl;
		}
		else if (x==6)
		{
			cout<<"6#..#..X###"<<endl;
		}
		u7();
	}
	else if (y==7)
	{
		l6();
		if (x==1)
		{
			cout<<"7XAXX.X...X"<<endl;
		}
		else if (x==4)
		{
			cout<<"7X.XXAX...X"<<endl;
		}
		else if (x==6)
		{
			cout<<"7X.XX.XA..X"<<endl;
		}
		else if (x==7)
		{
			cout<<"7X.XX.X.A.X"<<endl;
		}
		else if (x==8)
		{
			cout<<"7X.XX.X..AX"<<endl;
		}
		u8();
	}
	else if (y==8)
	{
		l7();
		if (x==1)
		{
			cout<<"8X%.....X0X"<<endl;
		}
		else if (x==2)
		{
			cout<<"8X.A....X0X"<<endl;
		}
		else if (x==3)
		{
			cout<<"8X..A...X0X"<<endl;
		}
		else if (x==4)
		{
			cout<<"8X...A..X0X"<<endl;
		}
		else if (x==5)
		{
			cout<<"8X....%.X0X"<<endl;
		}
		else if (x==6)
		{
			cout<<"8X.....AX0X"<<endl;
		}
		else if (x==8)
		{
			cout<<"8X......XWX"<<endl;

		}
		u0();
	}
	final=clock()-init;
	}
	s=1000-(m*2);
	cout<<"\nLocation:("<<x<<","<<y<<")";
	cout<<"\n#ofMoves: "<<m<<endl;
	cout<<"Total Time: "<<(double)final / ((double)CLOCKS_PER_SEC)<<"Seconds"<<endl;
	if(x==8 && y==8)
	{
		cout<<"\n\nYouWin!!";
		system("pause");
	}
	if ((x==5 && y==1)||(x==8 && y==1)||(x==7 && y==2)||(x==1 && y==4)||(x==5 && y==4)||
		(x==8 && y==5)||(x==1 && y==8)||(x==5 && y==8))
		{
			goto lose;
		}
	goto cell;

	lose:
	{
		cout<<"YouLose!!";
		system("pause");
	}
}//end of game 2 command

void l0()
	{
	cout<<"  12345678 "<<endl;
	cout<<" XXXXXXXXXX"<<endl;
	}
	void l1()
	{
	l0();
	cout<<"1X........X"<<endl;
	}
	void l2()
	{
		l1();
		cout<<"2XX.X.....X"<<endl;
	}
	void l3()
	{
		l2();
		cout<<"3XX.X.X..XX"<<endl;
	}
	void l4()
	{
		l3();
		cout<<"4X..X...X.X"<<endl;
	}
	void l5()
	{
		l4();
		cout<<"5XX.XXX...X"<<endl;
	}
	void l6()
	{
		l5();
		cout<<"6X..X...XXX"<<endl;
	}
	void l7()
	{
		l6();
		cout<<"7X.XX.X...X"<<endl;
	}
	void u0()
	{
		cout<<" XXXXXXXXXX"<<endl;
	}
	void u8()
	{
	cout<<"8X......X0X"<<endl;
	u0();
	}
	void u7()
	{
	cout<<"7X.XX.X...X"<<endl;
	u8();
	}
	void u6()
	{
	cout<<"6X..X...XXX"<<endl;
	u7();
	}
	void u5()
	{
	cout<<"5XX.XXX...X"<<endl;
	u6();
	}
	void u4()
	{
	cout<<"4X..X...X.X"<<endl;
	u5();
	}
	void u3()
	{
	cout<<"3XX.X.X..XX"<<endl;
	u4();
	}
	void u2()
	{
	cout<<"2XX.X.....X"<<endl;
	u3();
	}
	void wait(long seconds)
	{
	seconds = seconds * 1000;
	Sleep(seconds);
	}
	//end of game 2 functions
