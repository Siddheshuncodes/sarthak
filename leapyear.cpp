#include <iostream>
using namespace std ; 
 int main (){
    int year ;
    cout << "Enter the Year to be checked";
    cin>> year ;
    if (year % 400 ==0 || year % 4==0)
        cout<<"The is a leap Year ";
    else if (year % 100==0)
        cout<<"The Year is not a Leap Year";
    // else if (year % 4==0)
    //     cout<<"The Year is a Leap Year";
    else 
        cout<<"The Year is not a leap Year";
 }
