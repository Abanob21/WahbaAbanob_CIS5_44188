/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on April 2, 2017, 3:16 PM
 * Purpose: Display the square on the screen using x
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
    int number;//Enter a number from 1 to 15
    //Initialize variables
    
    //Input data
    cout<<"Enter a positive integer that mumber not greater than 15 "<<endl;
    cin>>number;
    if(number>15)
    {
        cout<<"out of range number"<<endl;
    }
    else
    {
        for (int i=1;i<=number;i++)
        {
            for (int j=1;j<=number;j++)
                cout<<"x";
        } cout<<endl;
        }
    
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

