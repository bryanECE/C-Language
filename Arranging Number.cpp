#include<iostream>
using namespace std;
int main()

{
    int X ,Y ,Z;
    
    cout<<"Input First number ";
    
    cin>>X;
    
    cout<<"InputSecond number ";
    
    cin>>Y;
    
    cout<<"Input Third number ";
    
    cin>>Z;
    
    if(X < Y&&Y < Z)
    
    cout <<X<<Y<<Z;

    else if(X > Y&&Y > Z)
    
    cout <<Z<<Y<<X;
    
    else if (X < Y&&Y > Z)
    
    cout <<X<<Z<<Y;
        
    else
    
    cout<<"NONE";
    
    system("pause");
    
    return 0;
}

