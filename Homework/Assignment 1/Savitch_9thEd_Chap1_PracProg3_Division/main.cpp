/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on February 22, 2017, 2:15 PM 
 * Purpose: to calculate the number of peas in pods by division sign. 
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
    int number_of_pods,peas_per_pod,total_peas;
    cout<<"Hello";
    cout<<"Press return after entering a number\n.";
    
    //Initialize variables
    
    //Input data
    cout<<"Enter the number of pods:\n";
    cin>>number_of_pods;
    cout<<"Enter the number of peas in a pod:\n";
    cin>>peas_per_pod;
    //Map inputs to outputs or process the data
    total_peas=number_of_pods/peas_per_pod;
    //Output the transformed data
    cout<<"If you have";
    cout<<number_of_pods;
    cout<<"peas pods\n";
    cout<<"and";
    cout<<peas_per_pod;
    cout<<"peas in each pod,then\n";
    cout<<"you have";
    cout<<total_peas;
    cout<<"peas in all the pods.\n";
    cout<<"God-bye\n";
    //Exit stage right!
    return 0;
}

