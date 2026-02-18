// 4. Write a program to calculate gross salary using basic salary and allowances. Gross Salary = 𝐵 + HRA + DA + Other Allowances
#include<iostream>
using namespace std;
int main () {
    float b,hra,da,otheralllowances,grosssalary;
    cout<<"Enter Basic salary: ";
    cin>>b;
    cout<<"Enter HRA salary: ";
    cin>>hra;
    cout<<"Enter DA salary: ";
    cin>>da;
    cout<<"Enter other allowance: ";
    cin>>otheralllowances;

    grosssalary=b+hra+da+otheralllowances;

    cout<<"The gross salary : "<<grosssalary;

    return 0;



}
