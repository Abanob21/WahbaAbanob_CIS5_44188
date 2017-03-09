/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on February 25, 2017, 1:00 PM
 * Purpose: to calculate the fence length.
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
    int height, width, totalLength;
    cout<<"Press return after entering a number\n.";
    cout<<"Enter hight of rectangle in feet:\n";
    cin>>height;
    cout<<"Enter width of rectangle in feet:\n";
    cin>>width;
    totalLength=2*height+2*width;
    cout<<width<<"feet width requires\n";
    cout<<totalLength<<"feet of fence.\n";
    //Initialize variables
    
    //Input data
    //Map inputs to outputs or process the data
    //Output the transformed data
    //Exit stage right!
    return 0;
}

