#include<iostream>
using namespace std;
int calculateamount(string day, int amount);
int main(){
string day;
int amount;
cout<<"Enter The day of purchase :";
cin>>day;
cout<<"Enter the purchase amount :";
cin>>amount;
int payableamount=calculateamount(day,amount);
cout<<"Your Payable Amount is : "<<payableamount <<" $";
}
 int calculateamount(string day, int amount){
    int result;
    if(day== "sunday"){
         int result1=amount*10/100;
         result=amount-result1;
    }
    if(day!="sunday"){
        int result1=amount*5/100;
         result=amount-result1;
    }
    return result;
 }