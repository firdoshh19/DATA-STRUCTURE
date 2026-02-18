//8.Write a program to calculate the simple interest using principal,rate, and time, using the formula:  Simple Interest (SI) =p*r*t/100

  #include<iostream>
  using namespace std;

  int main (){
      int p,r,t,si;

      cout<<"Enter the principal: ";
      cin>>p;

      cout<<"Enter the rate: ";
      cin>>r;

      cout<<"Enter the time: ";
      cin>>t;

      si=p*r*t/100;

      cout<<"The SI is: "<<si;
      return 0;







  }
