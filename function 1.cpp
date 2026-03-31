#include<iostream>
using namespace std;

int add (int a,int b,int c){
    return a+b+c;
}
int main (){
    int n1=10, n2=25,n4=20;
    int result;

      result= add(n1,n2,n4);
    cout<<"sum = "<< result;
    return 0;

}
