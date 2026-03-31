// add two complex number using struct.
#include<iostream>
using namespace std ;
struct complex {
    int real;
    int imag;
} ;
   int main (){
       complex c1,c2,sum;

       cout<<"enter first complex number:";
       cin>>c1.real;
       cout<<"enter first imag number:";
       cin>>c1.imag;
       cout<<"enter second complex number:";
       cin>>c2.real;
       cout<<"enter second imag number:";
       cin>>c2.imag;

       sum.real=c1.real + c2.real;
       sum.imag=c1.imag + c2.imag;
       cout<<"Sum="<<sum.real<<"+"<<sum.imag<<"i";
       return 0;

   }

