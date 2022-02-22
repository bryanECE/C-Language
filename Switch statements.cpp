#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
int main(){
	int z;
	cout<<"Please enter any number: ";
	cin>>z;
	
	switch(z){
		
		case 1: 
			cout<<"You are ugly"<< endl;
			break;
		case 2:
			cout<<"Pangit ka"<< endl;
			break;
		case 3:
			cout<<"You are smelly"<< endl;
			break;	
		
		default:
			cout<<"Mabaho ka"<<endl;
	}
	system("pause") ;
	return 0;
}
