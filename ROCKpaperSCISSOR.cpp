#include<iostream>
using namespace std;
int main()
{
    int plA,plB,rock,paper,scissors;
    cout<<"Please enter r for ROCK, p for paper, and s for scissors"<<endl;
    cout<<"Players Ready!"<<endl;
    cout<<"Start!"<<endl;
    cout<<"*The goal of this game is to choose the right item(rock, paper, and scissors) that will win against your opponent*";
    cout<<"Player one select your pick "<<endl;
    cin>> plA;
    cout<<"Player two select your pick "<<endl;
    cin>> plB;
    
    
    if (plA == 'r' || plA == 'R')

    {

            if  (plB == 'r' || plB == 'R')  {

            cout << "Tie" << endl; }

    }

     if (plA == 'p' || plA == 'P')

    {

        if  (plB == 'p' || plB == 'P')

        {

            cout << "Tie" << endl;

        }

    }

     if (plA == 's' || plA == 'S')

    {

    if  (plB == 's' || plB == 'S')

    {

    cout << "Tie" << endl; 

    }

     

    }

     if (plA == 'p' || plA == 'P') 

    {

        if (plB == 'r' || plB == 'R')

        {

            cout << "Player 1 wins" << endl;

        }

 

    }

     if (plA == 'r' || plA == 'R')

    {

    if (plB == 'p' || plB == 'P')

    {

        cout << "Player 2 wins" << endl;

    }  

    }

     if (plA == 'p' || plA == 'P')

    {

    if (plB == 's' || plB == 'S')

    {

    cout << "Player 2 wins" << endl;   

    }  

    }

     if (plA == 's' || plA == 'S')

    {

        if (plB == 'p' || plB == 'P')

        {

                cout << "Player 1 wins" << endl;

        }

    }

     if (plA == 'r' || plA == 'R')

    {

    if  (plB == 's' || plB == 'S')

    {

    cout << "Player 1 wins" << endl;   

    }  

    }

     if (plA == 's' || plA == 'S')

    {

    if (plB == 'r' || plB == 'R')

    {

        cout << "Player 2 wins" << endl;

    }  

    }

    else

    {

        cout << "Game canceled because of invalid entry." << endl;
    }
 
    
            
    system("pause");
    
    return 0;    
// Author: Bryan N. Brizo
// Date: October 31, 2013
// Program description: Rock, Paper, Scissors
}
 
 
