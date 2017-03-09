/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on march 4 2017, 9:32 PM
 * Purpose:to calculate number of miles you can drive on how much gas you have
 * the tank.
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
int main(int argc, char** argv) {
    //Declare variables
    float gallons//how much car have gallons have in the tank
    , miles //the miles the car has traveled
    , mpg;//miles per gallon 
    //Initialize variables
    
    //Input data
    cout<<"Mile per gallon version \n";
    cout<<"please enter the number of gallons your car can hold.\n";
    cin>>gallons;
    cout<<"Please enter the number of mile (s) you can drive on full tank.\n";
    cin>>miles;
    mpg = miles / gallons;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"your car gets "<<mpg<<"miles to the gallons.\n";
    //Exit stage right!
    return 0;
}

