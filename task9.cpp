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
    float result= distance*10;
    if(result<100){
        return 100;
    }
    return result;
}