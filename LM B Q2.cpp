// 2. Write a program to swap two numbers without using a third variable.
#include<iostream>
using namespace std;
int main (){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"\n After swapping";
    cout<<"\n First number: "<<a;
    cout<<"\n Second number: "<<b;


    }



