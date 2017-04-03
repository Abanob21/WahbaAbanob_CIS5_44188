/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on April  2, 2017, 2:32 PM
    * Purpose:  computes the value of the user holding of one stock.
    */

   //System Libraries
   #include <iostream>  //Input - Output Library
   using namespace std; //Name-space under which system libraries exist

   //User Libraries

   //Global Constants

   //Function Prototypes
   float stockPr(int whole, int nr, int dr, int stocks);
   //Execution begins here
   int main(int argc, char** argv) {
       //Declare variables
       int whole,nr,dr,stocks;//The stocks parts whole,numerator,denominator
       float stockVl=0;//stocks value
       char Continue;
       do{
          //Input data
           cout<<"Enter whole part of stocks ";
           cin>>whole;
           cout<<"Enter numerator of fractional part";
           cin>>nr;
           cout<<"Enter denominator of fractional part ";
           cin>>dr;
           cout<<"Enter number of stocks: ";
           cin>>stocks;
           stockVl = stockPr(whole,nr,dr,stocks);
           cout<<"Price of single stocks is "<<stockVl;
           cout<<"press 'y' or 'Y' to repeat calculations "
                   "for different variables ";
           cin>>Continue;

       }while(Continue  == 'y' || Continue == 'Y');
       //function definition
       return 0;
   }
          float stockPr(int whole, int nr, int dr, int stocks)
       {
           float price;
           price=static_cast<float>(whole*dr+nr)/(dr*stocks);
       }

