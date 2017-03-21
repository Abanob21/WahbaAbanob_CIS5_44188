/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 18, 2017, 7:32 PM
 * Purpose: Change for a Dollar Game 

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
    const int P = 1,N = 5,D = 10,Q =25;//The amount of the change
    int pennies,nickels,dimes,quarters,totcoins=0;
    int pencoin,niccoin,dimcoin,quacoin;
    //Initialize variables
    
    //Input data
    cout<<"Enter the number of pennies\n";
    cin>>pennies;
    cout<<"Enter the number of nickels\n";
    cin>>nickels;
    cout<<"Enter the number of dimes\n";
    cin>>dimes;
    cout<<"Enter the number if quarters\n";
    cin>>quarters;
    
    //Map inputs to outputs or process the data
    pencoin = pennies*P;
    niccoin = nickels*N;
    dimcoin = dimes*D;
    quacoin = quarters*Q;
    totcoins = pencoin + niccoin + dimcoin + quacoin;
    if(totcoins == 100)
        cout<<"congratulations you won\n";
    else if(totcoins < 100)
        cout<<"The amount is less than a dollar\n";
    else
        cout<<"you entered more than a dollar\n";
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

