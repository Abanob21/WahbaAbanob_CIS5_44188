/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on March 30, 2017, 8:32 PM
 * Purpose:  to get the sum of numbers.
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
    int num,sum=0;//Enter any random numbers
    //Initialize variables
    
    //Input data
    cout<<"Enter a positive integer value\n";
    cin>>num;
    for(int i=1;i<num;i++)
    {
        sum +=i;
    }
    cout<<"sum of all integers from 1 up to "<<num<<" is : ";
    cout<<sum<<endl;
    //Map inputs to outputs or process the data
            
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

