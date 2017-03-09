/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on February 26, 2017, 12:32 PM
 * Purpose: to calculate the number of coins in cents. 
 *            
 *           
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) 
{
    //Declare variables
    float Quarter= 25;   // one quarter is equal to 25 cents.
    float Dimes =10;     // one dime is equal to 10 cents.
    float Nickel = 5;     // one nickel is equal to 5 cents.
    int quarters, dimes, nickels, cents;
    //Initialize variables
    
    //Input data
    cout<<"Enter number of quarter \n";
    cin>>quarters;
    cout<<"Enter the number of dimes \n";
    cin>>dimes;
    cout<<"Enter the number of nickels \n";
    cin>>nickels;
    //Map inputs to outputs or process the data
    cents = (Quarter * quarters + Nickel * nickels + Dimes * dimes);
    //Output the transformed data
    cout<<"coins are worth"<<cents<<"cents/n";
    
    //Exit stage right!
    return 0;
}

