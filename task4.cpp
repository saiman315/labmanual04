#include<iostream>
using namespace std;

float calculator(float num1, float num2, string op);

int main(){
    float num1, num2;
    string op;
    cout << "Enter the 1st Number: ";
    cin >> num1;
    cout << "Enter the 2nd Number: ";
    cin >> num2;
    cout << "Enter The operator (+,-,*,/): ";
    cin >> op;
    float result = calculator(num1, num2, op);
    cout << "Result: " << result << endl;
}

float calculator(float num1, float num2, string op){
    float result = 0;
    if(op == "+"){
        result = num1 + num2;
    }
     if(op == "-"){
        result = num1 - num2;
    }
     if(op == "*"){
        result = num1 * num2;
    }
     if(op == "/"){
        result = num1 / num2;
    }
    return result;
}
