/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on March  15, 2017, 7:00 PM
 * Purpose:measure an object’s mass in kilograms and its weight in newtons.
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
    float mass,weight;//The mass and the weight of the object.
    //Initialize variables
    
    //Input data
    cout<<"Enter an object mass"<<endl;
    cin>>mass;
    weight=(mass*9.8);
    cout<<"The object weight is "<<weight<<"newtons"<<endl;
    if (weight>1000)
        cout<<"it is too heavy "<<endl;
    else if (weight<10)
        cout<<"it is too light"<<endl;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

