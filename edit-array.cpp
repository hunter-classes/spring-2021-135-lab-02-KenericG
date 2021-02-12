/*
Author: Nobel Prakasam
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2 C

This program makes a 10 int array and prints it. It
then prompts the user to edit the array and edits it
based on the parameters sent. It will loop through
this process untill the index given is out of range
upon which the program quits.
*/
#include <iostream>

using namespace std;
int x[10];
int i,j;

int main()
{
    for (i = 0; i < 10; i++){
        x[i] = 1;
    }
    while ((j >= 0) && (j <= 9)){
    cout<<endl;
    for (i = 0; i < 10; i++){
        cout<<x[i]<<" ";
    }
    cout<<endl<<"Index: ";
    cin>>j;
    cout<<endl<<"Value: ";
    cin>>x[j];
    }
    cout<<endl<<"Index Out Of Range. Exiting.";
    return 0;
}