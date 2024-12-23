#include<iostream>
using namespace std;
void printname(string name);
int main(){
string name;
cout<<"Enter your Name :";
cin>>name;
printname(name);
}

void printname(string name){
    while (true)
    {
        cout<<"Your name is :"<<name <<endl;
    }
    
}