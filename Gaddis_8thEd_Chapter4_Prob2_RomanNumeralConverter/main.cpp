

/* 
 * File: Roman Numeral Converter
 * Author: Joshua Ludwig
 * Created on March 18, 2017, 2:46 PM
 * Purpose: Write a program that asks the user to enter a number within
 * range of 1 and 10.
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int number;
    
    cout<<"Enter a number between 1 and 10"<<endl;
    cin>>number;//Input from user
    
    while(number<1)//While statement if input is lower than 1
    {
        cout<<"ERROR please try a different number between 1 and 10"<<endl;
        cin>>number;
    }
    while(number>10)//While statement if input is greater than 10
    {
        cout<<"ERROR please try a different number between 1 and 10"<<endl;
        cin>>number;
    }
   
    cout<<"Your number was "<<number<<endl;

    return 0;
}

