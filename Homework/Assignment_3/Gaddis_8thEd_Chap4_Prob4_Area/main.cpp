/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on March  16, 2017, 8:00 PM
 * Purpose: to calculate area of rectangle. 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float l1,//the length of rectangle number 1.
          l2,//the length of rectangle number 2.
           w1,//the width of rectangle number 1.
           w2,//the width of rectangle number 2.
           area1,//the are of the first rectangle.
           area2;//the are of the second rectangle.
    //Initialize variables
    
   //Input data
    cout<<"Enter a a length of the first rectangle";
    cin>>l1;
    cout<<"Enter a width of first rectangle";
    cin>>w1;
    //calculate area of first rectangle.
    area1= l1*w1;
    cout<<"Area of first rectangle is "<<area1<<endl;
    cout<<"Enter the length of second rectangle ";
    cin>>l2;
    cout<<"Enter a width of second rectangle ";
    cin>>w2;
    //calculate area of second rectangle
    area2=l2*w2;
    cout<<"Area of second rectangle is"<<area2<<endl;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    if(area1==area2)
    {
        cout<<"Two areas are equal";
    }
        //Exit stage right!
    return 0;
}

