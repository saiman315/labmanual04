#include<iostream>
using namespace std;
float calculateinches(float inches);
int main(){
 float inches;
 cout<<"Enter The Measurement In inches :";
 cin>>inches;
float foot=calculateinches(inches);
cout<<inches <<" Is equivalent to : "<<foot <<" Feets";
}

float calculateinches(float inches){
 return inches/12;   
}