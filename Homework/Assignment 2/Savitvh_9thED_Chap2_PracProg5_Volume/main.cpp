/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on march 6 2017, 7:32 PM
 * Purpose: computes the volume of a sphere given the radius.
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
    float radius,//a straight line for sphere
          volume;// power of sound
    const float PT = 3.1415;
    const float MUL_NUM = 4.0, MUL_DEN = 3.0;
    //Initialize variables
    
    //Input data
    cout<<"\n Enter radius of a sphere ";
    cin>>radius;
    volume = (MUL_NUM/MUL_DEN)* PT * radius * radius * radius;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"the volume is "<<volume<<endl;
    //Exit stage right!
    return 0;
}

