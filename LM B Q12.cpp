/* 12. Write a program to calculate the area and circumference of a circle using the following formulae:
Area of Circle = 𝜋𝑟2
Circumference of Circle = 2𝜋𝑟
where 𝑟 is the radius of the circle and pi = 3.14159.*/
#include<iostream>
using namespace std;
int main (){
    float area,circumference,radius,pi;
    pi=3.14159;

    cout<<"Enter radius of circle: ";
    cin>>radius;
    area=pi*radius*radius;
    circumference=2*pi*radius;

    cout<<" Area of circle: "<<area;
    cout<<"\n Circumference of circle: "<<circumference;
    return 0;


}
