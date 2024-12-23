#include<iostream>
using namespace std;
int howmanystickers(int length);
int main(){
 int length;
 cout<<"Enter the side length of rubik cube :";
 cin>>length;
int result=howmanystickers(length);
cout<<"Nuber Of Stickers Needed :"<<result;
}

int howmanystickers(int length){
    int result1 = length * length;
    return result1 * 6;
}