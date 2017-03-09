/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on march 5 2017, 5:32 PM
 * Purpose: the speed of treadmill in miles per hour.
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
    float mph=6.5;//miles per hour
    float min_per_mile=(1/mph)*60;
    int min=static_cast<int>(min_per_mile);
    float sec=(min_per_mile-min)*60;
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"pace is "<<min<<"minutes and "<<sec<<"seconds per mile"<<endl;
    //Exit stage right!
    return 0;
}

