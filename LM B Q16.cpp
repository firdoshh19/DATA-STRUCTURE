/* 16. Write a C++ program to evaluate the following expression using
operator precedence and associativity rule and display the final
result:
Result = (25 ÷ 5 + 3 × 2 ≤ 15) || (!(8 − 3 > 10)) */
#include<iostream>
    using namespace std;
    int main (){
        int result;
        result=(25 / 5 + 3 * 2 <= 15) || (!(8 - 3 > 10));
        cout<<"Result:"<<result;


    }


