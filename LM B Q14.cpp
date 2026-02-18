// 14. Write a C++ program to compute the quotient and remainder of two integers.
#include<iostream>
using namespace std;
int main (){
    int num1,num2,quotient,remainder;
    cout<<"Enter number 1 : ";
    cin>>num1;
    cout<<"Enter number 2 : ";
    cin>>num2;
    quotient=num1/num2;
    remainder=num1%num2;
    cout<<" Quotient is: "<<quotient;
    cout<<"\n Remainder is:"<<remainder;
    return 0;


}
