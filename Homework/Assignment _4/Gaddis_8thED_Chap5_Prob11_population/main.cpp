/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on April 2, 2017, 8:32 PM
 * Purpose:  size of a population of organism
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
    int start,avgDly,noDays;//starting number of the organism 
                            //and the average number on days
    
    //Initialize variables
    
    //Input data
    cout<<"Enter starting population of organism: ";
    cin>>start;
    if(start<2)
    {
        cout<<"invalid renter: ";
        cin>>start;
    }
    cout<<"Enter average daily population: ";
    cin>>avgDly;
    if(avgDly<0)
    {
        cout<<"invalid renter ";
        cin>>avgDly;
    }
    avgDly=(avgDly*start)/100;
    cout<<"Enter number of days";
    cin>>noDays;
    for(int i=0;i<noDays;i++)
    {
        start=start+avgDly;
        cout<<"Day "<<i+1<<":"<<start<<endl;
    }
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

