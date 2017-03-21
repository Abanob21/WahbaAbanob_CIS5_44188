/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on March  16, 2017, 7:00 PM
 * Purpose:  enter a month (in numeric form), a day, and a two-digit year. 
 * The program should then determine whether the month times 
 * the day is equal to the year.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int Month,//chose month
        Day,//chose a day
        Year,//Chose a year
        I;// using this to complete the equations.    
    //Initialize variables
    
    //Input data
    cout<<"Enter a month "<<endl;
    cin>>Month;
    cout<<"Enter a date "<<endl;
    cin>>Day;
    cout<<"Enter a year with two digits: "<<endl;
    cin>>Year;
    //Map inputs to outputs or process the data
    I = Day*Month;
    if(I==Year)
    {
        cout<<" Date is Magic "<<endl;
    }    
        else    
            cout<<"Date is not Magic number "<<endl;
            //Output the transformed data
    
    //Exit stage right!
    return 0;
}

