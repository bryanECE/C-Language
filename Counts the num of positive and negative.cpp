#include<iostream> 

using namespace std; 

void determine(int NUMcount, int input_array[], int count_array[]); 

int main() 

{ 

int NUMcount; 

cout << "How many numbers? "; 

cin >> NUMcount; 

int input_array[NUMcount]; //this is an array for input by the user 

int count_array[4] = {0};	//this are the counts like the even , odd and etc 

cout << "\nKindly Enter " << NUMcount << " numbers one at a time:"<<endl;// States how many numbers should be entered 

for(int n = 0; n < NUMcount; n++) 

cin >> input_array[n]; 

determine(NUMcount, input_array, count_array); 

cout << "Count of Even Numbers:\t" << count_array[0] << endl; //Displays the number of even numbers inputed

cout << "Count of Odd Numbers:\t" << count_array[1] << endl; //Displays the number of odd numbers inputed

cout << "Count of Positive Numbers:\t" << count_array[2] << endl; //Displays the number of positive numbers inputed 

cout << "Count of Negative Numbers:\t" << count_array[3] << endl; //Displays the number of negative numbers inputed 

system("pause");

return 0; 

} 

void determine(int NUMcount, int input_array[], int count_array[]) 

{ 

for(int i = 0; i < NUMcount; i++) 

{ 

if(input_array[i] % 2 == 0) 

count_array[0]++; 

else 

count_array[1]++; 

if(input_array[i] >= 0) 

count_array[2]++; 

else 

count_array[3]++; 

} 

}
 
// Author: Bryan N. Brizo

// Date: November 26, 2013

// Program description: This program cpunts the number of positive and negative data values found and the number of odd and even numbers.
