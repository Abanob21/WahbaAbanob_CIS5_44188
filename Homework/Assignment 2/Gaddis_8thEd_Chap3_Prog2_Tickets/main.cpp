/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on march 7, 2017, 1:00AM
 * Purpose:how many tickets for each class of seats were sold
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //  It defines the manipulator functions
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float costA,costB,costC;//cost of the tickets
    float ticketsA,ticketsB,ticketsC;//tickets for the travel
    float amount; //how much money
    //Initialize variables
    costA=15.0;
    costB=12.0;
    costC=9.0;
    //Input data
    cout<<"Enter number of tickets for class A:";
    cin>>ticketsA;
    cout<<"Enter number of tickets for class B:";
    cin>>ticketsB;
    cout<<"Enter number of tickets for class C:";
    cin>>ticketsC;
    
    //Map inputs to outputs or process the data
    amount=(costA*ticketsA*costB*ticketsB*costC*ticketsC);
    //Output the transformed data
        cout<<"total amount of tickets sales: $"
                             <<setprecision(2)<<amount<<endl;
    //Exit stage right!
    return 0;
}

