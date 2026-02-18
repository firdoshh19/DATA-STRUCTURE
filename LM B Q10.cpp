//11.Write a program to check whether a character is a vowel or consonant.
#include<iostream>
using namespace std;
   int main (){
       char ch;
      cout<<"Enter an alphabet : ";
      cin>>ch;
   //   ch=tolower(ch);

      if((ch>='a' && ch<='z')){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            cout<<"It is a vowel. ";
            else
                cout<<"It is a constant. ";
      }
      else{
        cout<<"Enter a valid character ";
      }


   }
