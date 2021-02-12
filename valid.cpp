/*
Author: Nobel Prakasam
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2 A

This program asks the user for a number greateer than 0
but less than 100. If the number entered doesnt meet this
requirment, the user is asked again untill it is met.
Once met, the number is squared and outputed into the
terminal. 
*/
#include <iostream>

using namespace std;
int x = 101;

int main()
{
    while ((x>99)||(x<1)){
    cout<<endl<<"Enter Integer Greater Than 0 But Less Than 100: ";
    cin>>x;
    }
    cout<<endl<<"Number squared is "<<(x*x)<<endl;
    return 0;
}