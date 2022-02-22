#include<iostream> 
#include<cmath> 

using namespace std; 

int main() 
{ 
char choice, choice1, choice2; 

do 
{ 
cout<< "THE GAME IS ROCK, PAPER, and SCISSORS" <<endl; 
cout<< endl; 
cout<< "Ready!! Start.."<<endl; 
cout<< endl; 
cout<< "Player 1 please enter: P for Paper, R for Rock and S for Scissor "<<endl; 
cin>> choice1; 
cout<< endl; 
cout<< "Player 2 please enter: P for Paper, R for Rock and S for Scissor "<<endl; 
cin>> choice2; 
cout<< endl; 


if((choice1 == 'P' || choice1 == 'p') && (choice2 == 'P' || choice2 == 'p')) 
{ 
cout<< "ROUND DRAW" <<endl; 
} 
if((choice1 == 'P' || choice1 == 'p') && (choice2 == 'R' || choice2 == 'r')) 
{ 
cout<< "Winner player 1, Paper covers Rock" <<endl; 
} 
if((choice1 == 'P' || choice1 == 'p') && (choice2 == 'S' || choice2 == 's')) 
{ 
cout<< "Winner player 2, Scissors cut Paper" <<endl; 
} 
if((choice1 == 'R' || choice1 == 'r') && (choice2 == 'R' || choice2 == 'r')) 
{ 
cout<< "ROUND DRAW" <<endl; 
} 
if((choice1 == 'R' || choice1 == 'r') && (choice2 == 'P' || choice2 == 'p')) 
{ 
cout<< "Winner player 2, Paper covers Rock" <<endl; 
} 
if((choice1 == 'R' || choice1 == 'r') && (choice2 == 'S' || choice2 == 's')) 
{ 
cout<< "Winner player 1, Rock breaks Scissors" <<endl; 
} 
if((choice1 == 'S' || choice1 == 's') && (choice2 == 'S' || choice2 == 's')) 
{ 
cout<< "ROUND DRAW" <<endl; 
} 
if((choice1 == 'S' || choice1 == 's') && (choice2 == 'P' || choice2 == 'p')) 
{ 
cout<< "Winner player 1, Scissors cut Paper" <<endl; 
} 
if((choice1 == 'S' || choice1 == 's') && (choice2 == 'R' || choice2 == 'r')) 
{ 
cout<< "Winner player 2, Rock breaks Scissors" <<endl; 
} 
cout<< endl; 
cout<< "If you want to play again enter Y, if you want to terminate enter A" <<endl; 
cin>> choice; 
cout<< endl; 
if(choice == 'A' || choice == 'a') 
{ 
cout<< "THANKS FOR PLAYING!!"<<endl; 
break; 
} 
}while(choice != 'A' || choice != 'a'); 

system("pause"); 
return 0; 
}
