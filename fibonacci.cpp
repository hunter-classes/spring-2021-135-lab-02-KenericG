/*
Author: Nobel Prakasam
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2 D

This program stores in an array and prints the
fibonacci sequence with accuracy untill around
2 billion (the integer limit in C++).
*/
#include <iostream>

using namespace std;
int x[60]={0,1};

int main()
{
    cout<<endl<<x[0]<<" ";
    cout<<endl<<x[1]<<" ";
    for (int i = 2; i < 60; i++){
        x[i]=x[i-1]+x[i-2];
        cout<<endl<<x[i]<<" ";
    }
}

/*Near around 2 billion the values start becoming erratic and
swing wildly between large positive and negative numbers. The 
reason for this is the integer limit in C++. Each int type
variable is allocated 32 bits to store the value. Of this 1 bit
is used for the numbers sign (+ or -) leaving 31 bits or 2^31
(2,147,483,647) diffrent values an int can be. When a value goes
over this number it overflows and wraps around to the minimum possible
value which is around negative 2 billion. This then continues
cauing the erratic values seen.*/
