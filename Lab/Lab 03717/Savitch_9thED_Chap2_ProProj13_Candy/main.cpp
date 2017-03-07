/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on march 7, 2017, 11:59 AM
 * Purpose: to know how many candy you can eat.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and Initialize variables
    char sex;//M or F
    unsigned short ht,wt,age;//height(in), weight(LBS),age(years)
    unsigned char cdyCals=230;//cant bar calories
    float bmr;//basic metabolic rate (calories)
    int nCdyBrs;//number of candy bars we can eat
    //Input data
    cout<<"This program calculates the number of";
    cout<<"candy bars allowed per day based upon you BMR"<<endl;
    cout<<"type in your sex (M/F),WT(LBS), Ht(in),age (years)"<<endl;
    cout<<"type are integer based"<<endl;
    cin>>sex>>wt>>ht>>age;
    //Map inputs to outputs or process the data
    bmr=(sex='M')?
        66 + 6.3f*wt + 12.9f*ht - 6.8f*age:
        655 + 4.3f*wt +4.7f*ht - 4.7f*age;
    nCdyBrs=static_cast<int>(bmr/nCdyBrs);
    //Output the transformed data
    cout<<"The number of candy bars you can eat = "<<nCdyBrs<<endl;
    //Exit stage right!
    return 0;
}

