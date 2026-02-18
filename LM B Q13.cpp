// 13. Write a program to find the third angle of a triangle using the formula: Third Angle = 180◦ − (First Angle + Second Angle).
#include<iostream>
using namespace std;
int main (){
    int ang1,ang2,ang3;
    cout<<"Enter angle 1 : ";
    cin>>ang1;
    cout<<"Enter angle 2 : ";
    cin>>ang2;
    ang3=180-(ang1+ang2);
    cout<<"Third angle is : "<<ang3;
    return 0;





}
