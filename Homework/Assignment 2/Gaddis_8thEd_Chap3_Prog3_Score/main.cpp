/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on march 8, 2017, 3:32 PM
 * Purpose:  
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
    float testSc1 //the score they have on the test
         ,testSc2
         ,testSc3
         ,testSc4
         ,testSc5;
    float sum, average; //the result of the test
    //Initialize variables
    
    //Input data
    cout<<"enter the test score 1: ";
    cin>>testSc1;
    cout<<"enter the test score 2: ";
    cin>>testSc2;
    cout<<"enter the test score 3: ";
    cin>>testSc3;
    cout<<"enter the test score 4: ";
    cin>>testSc4;
    cout<<"enter the test score 5: ";
    cin>>testSc5;
            
    //Map inputs to outputs or process the data
    sum = testSc1 + testSc2 + testSc3 + testSc4 + testSc5;
    average = sum/5;
    //Output the transformed data
    cout<<"\nThe average test score"<<average<<endl;
    //Exit stage right!
    return 0;
}

