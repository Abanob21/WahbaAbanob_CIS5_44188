 /* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on March  15, 2017, 7:00 PM
 * Purpose:   enter a number within the range of 1 through 10. 
  * Use a  switch  statement to display the Roman numeral 
  * version of that number. 
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
    int R;//all the real numbers
    //Initialize variables
    cout<<"Enter the number within the range 1 to 10"<<endl;
    cin>>R;
    if(R<1 || R<10)
    {
    cout<<"Enter the value 1 to 10 "<<endl;
    cout<<"Enter a number "<<endl;
    cin>>R;
    }
    switch (R)
    {//Input data
            case 1:cout<<"I"<<endl;
                  break;
            case 2:cout<<"II"<<endl;
                  break;
            case 3:cout<<"III"<<endl;
                  break;
            case 4:cout<<"IV"<<endl;
                   break;
            case 5:cout<<"V"<<endl;
                  break;
            case 6:cout<<"VI"<<endl;
                 break;
            case 7:cout<<"VII"<<endl;
                 break;
            case 8:cout<<"VIII"<<endl;
                 break;
            case 9:cout<<"IX"<<endl;
                  break;
            case 10:cout<<"X"<<endl;
                  break;
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

