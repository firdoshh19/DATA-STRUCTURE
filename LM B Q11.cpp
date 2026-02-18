// 11. Write a program to input marks of three subjects and calculate total and percentage.
 #include<iostream>
using namespace std;
int main (){
    float m1,m2,m3;
    float percentage,total;
    cout<<"Enter marks of first subject : ";
    cin>>m1;
    cout<<"Enter marks of second subject : ";
    cin>>m2;
    cout<<"Enter marks of third subject : ";
    cin>>m3;

    total=m1+m2+m3;
    percentage=(total/300)*100;
    cout<<" Total marks of three subject : "<<total;
    cout<<"\n Percentage of three subjects : "<<percentage;






}
