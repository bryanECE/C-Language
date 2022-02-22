#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;
int main(){
	int x;
	cout<<" Please enter your age: ";
	cin>>x;
	int y;
	cout<<" Please enter your age at your last exam: ";
	cin>>y;
	bool z;
	cout<<" Are you not intoxicated? (true / false) ";
	cin>>z;
	
	if((x>=1)&&(x<16)){
		cout<<"You can't drive"<<endl;
	}else if(!z){
		cout<<"You can't drive"<<endl;
	}else if(x>=80&&((x>100)||((x-y>5)))){
		cout<<"You can't drive"<<endl;
	}else {
		cout<<"You can drive"<<endl;
	}
	
	system("pause") ;
	return 0;
}
