/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on March 18, 2017, 9:25 PM
 * Purpose: to calculate  the books club points.
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
    int purchd;//The books was purchased
    //Initialize variables
    
    //Input data
    cout<<"Enter the number of books purchased on this"<<"Month"<<endl;
    cin>>purchd;
    //Map inputs to outputs or process the data
    if(purchd <= 0)
        cout<<"you earn 0 points"<<endl;
    else if(purchd == 1)
        cout<<"your earn 5 points"<<endl;
    else if(purchd == 2)
        cout<<"your earn 15 points"<<endl;
    else if(purchd == 3)
        cout<<"your earn 30 points"<<endl;
    else
        cout<<"you earn 60 points"<<endl;
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

