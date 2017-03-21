/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on March 15, 2017, 7:00 PM
 * Purpose: to know which number is bigger or smaller.
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
    float num1,num2;//Enter random number.
    //Initialize variables
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    //Input data
    
    //Map inputs to outputs or process the data
    num1>num2? cout<<"First number is a larger and \n second number is smaller."
            :cout<<"first number is smaller and \n second number is larger";
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

