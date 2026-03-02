//11.Write a program to check whether a character is a vowel or consonant.
#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    ch = tolower(ch);   // Convert character to lowercase

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        cout << "Vowel";
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        cout << "Consonant";
    }
    else
    {
        cout << "Not an alphabet";
    }

    return 0;
}