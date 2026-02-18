// Lab Manual part B
// 1. Write a program to swap two numbers using a third variable.
#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    c=a;
    a=b;
    b=c;

    cout<<"\n After swapping";
    cout<<"\n First number: "<<a;
    cout<<"\n Second number: "<<b;




}
