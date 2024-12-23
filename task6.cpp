#include<iostream>
using namespace std;
void result(float score);
int main(){
float score;
cout<<"Enter your  score :";
cin>>score;
result( score);

}
void result(float score){
    if(score>50){
        cout<<"Your are Pass ";
    }
    if(score<=50){
        cout<<"You are Fail";
    }
}