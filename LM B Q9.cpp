/*9. Write a program to calculate the average of two integers and
display the result as a floating-point value using explicit type
casting.*/

#inculde<iostream>
using namespace std;
int main (){
int num1,num2;
float average;
cout<<"Enter two numbers ";
cin>>num1>>num2;
average=(float)(num1+num2)/2;
cout<<"Result:"<<average;


}