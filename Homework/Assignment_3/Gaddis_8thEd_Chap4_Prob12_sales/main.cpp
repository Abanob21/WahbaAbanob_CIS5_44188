/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on March 19, 2017, 11:00 PM
 * Purpose: to calculate Quantity discounts for company sells a package. 
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
    float cost,quantity,totcost;//Enter the details of your purchase.
    //Initialize variables
    
    //Input data
    cout<<"Enter the quantity ";
    cin>>quantity;
    if(quantity <= 0)
    {
    cout<<"invalid input\n renter quantity";
            cin>>quantity;
    }
    cost = 99;
    if(quantity < 10)
        totcost=cost;
    else if (quantity <= 19)
        totcost=cost-((cost*20) / 100);
    else if (quantity <= 49)
        totcost=cost-((cost*30) / 100);
    else if (quantity <= 99)
        totcost=cost-((cost*40) / 100);
    else
        totcost=cost-((cost*50) / 100);
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"Total cost purchase:$ "<<quantity*totcost<<endl;
    //Exit stage right!
    return 0;
}

