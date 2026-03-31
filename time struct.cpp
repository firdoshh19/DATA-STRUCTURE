#include<iostream>
using namespace std;
struct Time {
int h,m,s;
};
Time input (){
    Time t;
    cin>>t.h>>t.m>>t.s;
    return t;
}
    Time add(Time t1,Time t2){
    Time sum;
    sum.s= t1.s + t2.s;
    sum.m= t1.m + t2.m;
    sum.h= t1.h + t2.h;

    if(sum.s>=60){
        sum.m= sum.m + sum.s / 60;
        sum.s= sum.s % 60;
    }
    if(sum.m>=60){
        sum.h= sum.h + sum.m /60;
        sum.m= sum.m % 60;

        }
        return sum;
    }
    void display (Time t){
        cout<<t.h<< "hour" << t.m << "minutes" << t.s<< "seconds";
    }
    int main (){
        Time t1,t2,sum;
        cout<<"Enter first time (h m s) :";
        t1=input ();
        cout<<"Enter second time (h m s) :";
        t2=input ();
        sum = add(t1,t2);
        cout<<"Total time = " ;
        display(sum);
        return 0;
    }
