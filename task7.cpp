#include<iostream>
using namespace std;
void evenorodd(int num);
int main(){
int num;
cout<<"Enter the number : ";
cin>>num; 
 evenorodd( num);
}
 void evenorodd(int num){
    if(num/2==0){
        cout<<"This number is even ";
    }
    if(num/2!=0){
        cout<<"This number is odd";
    }
 }