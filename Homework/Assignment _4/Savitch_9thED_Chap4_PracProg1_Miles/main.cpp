    /* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on April  1, 2017, 11:32 AM
 * Purpose:  to know how much gasoline did spend per mile.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float LIT =0.264179;//A liter is 0.264179
//Function Prototypes
float mpg(int miles, int litres);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char choice;
    int litres,miles;
    do{
            //Input data
    cout<<"Enter the numbers of litres of gasoline: ";
    cin>>litres;
    cout<<"Enter the number of miles traveled";
    cin>>miles;
    cout<<"The number of miles per gallon is "<<mpg( miles,  litres)<<endl;
    cout<<"Do you want to repeat the calculation Y if yes,N if no : ";
    cin>>choice;
    }while (choice =='y' || choice =='Y');
    //calculation
    return 0;
}
float mpg(int miles, int litres)
{
    float gallon;
gallon = LIT * litres;
return (miles/gallon);
}


