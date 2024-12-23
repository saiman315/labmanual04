#include<iostream>
using namespace std;
float calculatedistance(float distance);
int main(){
    float distance;
    cout<<"Enter The Distance :";
    cin>>distance;
    float result=calculatedistance(distance);
    cout<<"Fuel Needed :"<<result;
}

float calculatedistance(float distance){
    return distance*10;
}