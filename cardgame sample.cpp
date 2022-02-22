#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<ctime> //needed for getRand
using namespace std;
#include"cards.cpp"

int _tmain(int argc, _TCHAR* argv[])
{
	int getRand(); //Get a random number under 52
	int rand; //See above
	const int ALLCARDS = 52;
	int split[ALLCARDS] = {0}; //Keeps track of who has what card: 0 is not used, 1 is player, 2 is computer
	int playerScore = 0;
	int comScore = 0;
	int i;
	srand((unsigned)time(NULL));

	for(i = 0;i <26;i++){
		rand = getRand();
		cout<<rand<<' ';
		if(split[rand] = 0)split[rand]=1;
		//else{
		//	//while(split[rand] = 1 || split[rand] = 2)rand = getRand();
		//	//split[rand]=2;
		//	i--;
		//	}
	}
	for(i = 0;i < ALLCARDS;i++)cout<<split[i]; //52 1s and 0s Should be only 26 1s here
	_getch();
	return 0;}

int getRand(){
	const int DIVISOR = 52;
	int result;
	result = rand() % DIVISOR;
	return result;
}
