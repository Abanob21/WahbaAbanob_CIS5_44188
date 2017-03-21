/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on March  17, 2017, 9:27 PM
 * Purpose: to calculate the person BMI depend om his weight and hight.
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
    float weight,height,BMI;//Enter your information
    //Initialize variables
    
    //Input data
    cout<<"Enter the person weight";
    cin>>weight;
    cout<<"Enter the person hight";
    cin>>height;
    BMI=(weight*703)/(height*height);
    cout<<"person body mass index(BMI)"<<BMI<<endl;
    if(BMI>=18.5&&BMI<=25)
    cout<<"person is a optimal weight ";
    else if (BMI<18.5)
        cout<<"the person is underweight"<<endl;
    else
        cout<<"The person is overweight"<<endl;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

