/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on march 4, 2017, 3:32 PM
 * Purpose: to calculate number square root.
 *            
 *           
 */

//System Libraries
#include <iostream>
#include <math.h>  
#include <exception> 

using namespace std;

int main(){
    // required variables
    float square_root = 0, estimation = 1; //the square of the number
    int cycle=50; 
    // try/throw/catch to handle exceptions
    try {
    cout << "enter in a number: ";
        cin >> square_root;
        if (square_root<=0){
            throw 0;
        }
    }
    // catches exceptions of 0 or any character
    catch (int invalid_value){
        cout << "invalid number entered...";
        return 0; 
    } 
    //outputs the estimated value and the sqrt() function in math.h
    cout << "actual answer is: " << sqrt(square_root);
    return 0;
}

