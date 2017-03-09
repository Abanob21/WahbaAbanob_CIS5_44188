/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string month1;//which month in the year
    string month2;
    string month3;
    float month1_rainFl,month2_rainFl;
    float month3_rainFl,average;
    //Initialize variables
    
    //Input data
    cout<<"Enter first month name: ";
    cin>>month1;
    cout<<"Enter"<<month1<<"of rainfL in inches: ";
    cin>>month1_rainFl;
    cout<<"Enter second month name: ";
    cin>>month2;
    cout<<"Enter"<<month2<<"of rainfL in inches: ";
    cin>>month2_rainFl;
    cout<<"Enter third month name: ";
    cin>>month3;
    cout<<"Enter"<<month3<<"of rainfL in inches: ";
    cin>>month3_rainFl;
    //Map inputs to outputs or process the data
    average = (month1_rainFl + month2_rainFl + month3_rainFl)/3;
    //Output the transformed data
    cout<<"The average monthly rainFl for "<<month1
            <<","<<"month2"<<month3<<"was"<<average<<"inches.";
    //Exit stage right!
    return 0;
}

