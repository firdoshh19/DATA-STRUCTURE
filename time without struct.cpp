// without structure
#include<iostream>
using namespace std;
struct Time {
int h,m,s;
};
void input (Time &t){
    cin>>t.h>>t.m>>t.s;
}
    void add( Time &sum , Time t1 ,Time t2){

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
    }
    void display (Time t){
        cout<<t.h<< "hour" << t.m << "minutes" << t.s<< "seconds";
    }
    int main (){
        Time t1,t2,sum;
        cout<<"Enter first time (h m s) :";
        input (t1);
        cout<<"Enter second time (h m s) :";
        input (t2);
        add(sum ,t1 ,t2);
        cout<<"Total time = " ;
        display(sum);
        return 0;
    }


