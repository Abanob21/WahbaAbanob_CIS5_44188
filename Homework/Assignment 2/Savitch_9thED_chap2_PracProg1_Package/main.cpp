/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on march 4, 2017, 2:32 PM
 * Purpose: to calculate the weight of package of breakfast cereal in ounces
 * and output the weight in metric.
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
    float MATRICTION =35273.92f; //a unit of weight equal to 1,000 kilograms
    float ounceses,weight,boxes;// the description of the boxes 
    char choice;
    do
    {
    //Initialize variables
    
    //Input data
        cout<<"Enter weight of package in ounce: ";
        cin>>ounceses;
        weight = (ounceses/MATRICTION);
        cout<<"Weight of packet in metric tons is "
                                         <<weight<<"\n";
        boxes = (MATRICTION/ounceses);
        cout<<"Number of boxes to make metric:"
                                         <<boxes<<"\n";
        cout<<"press y or Y to continue"<<endl;
        cin>>choice;}
        while(choice == 'y' || choice == 'Y' );
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

