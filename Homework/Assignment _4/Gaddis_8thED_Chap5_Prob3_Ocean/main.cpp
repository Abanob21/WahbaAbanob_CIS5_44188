/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on April  1, 2017, 7:32 AM
 * Purpose:  To know the how much the ocean will increase in 25 years
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
    int year;       //the year of increasing of the ocean level
    float incrLvl;  //The increase level of the ocean
    float totIncr;  //The total increase of the increase
    //Initialize variables
    totIncr=0;
    incrLvl=1.5;
    year=1;
    cout<<"___________________"<<endl;
    cout<<"year Total increasing level"<<endl;
    cout<<"___________________"<<endl;
    while(year<=25)
    {
        totIncr+=incrLvl;
        cout<<year<<" year "<<totIncr<<" millimeters "<<endl;
        year++;
    }
    
    cout<<"___________________"<<endl;
    //Input data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

