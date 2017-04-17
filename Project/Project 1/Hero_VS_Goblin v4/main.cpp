/*
 * File:   main.cpp
 * author:Abanob Wahba
 * Created on April 16, 2017, 4:32 AM
 * Purpose: This game is a battle between 2 character hero and goblin you
 * choose hero or goblin and see successive rounds of fighting till health 
 * of either Hero or Goblin becomes zero or less The computer will give random 
 * skill levels and lives to fighters.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>     //Time for rand
#include <cstdlib>   //Srand to set the seed
#include <fstream>   //File I/O
#include <iomanip>   //Format the output
#include <string>    //Strings
#include <cmath>     //Math functions
using namespace std; //Name-space under which system libraries exist

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    //Declare and Initialize boolean variable isRunni to true for executing rounds
    int isRunni = true;
    bool is_hero,tieResu=false;// This is a boolean variable
    int input;
    string userNm="";// This is a string variable

    // Get user choice 1 for  Hero , 0 for Goblin
   cout<<"Choose a Champion Enter 1 for Hero and 0 for Goblin "<<endl;
   cin>>input;
   //If user wants to be hero set is_hero to true
    if ( input == 1 )
    {
      is_hero = true;
      userNm="Hero";
      cout << "You have chosen " << userNm<< endl;
   }
   //If user wants to be Goblin set is_hero to false
   else if(input==0)
    {
        is_hero=false;
        userNm="Goblin";
      cout << "You have chosen " <<userNm<< endl;
    }
    //If user enters any other value, Display invalid input and exit returning 1
    else
    {
        cout << "Sorry! Invalid input" << endl;
        return 1;
    }

    // Display Good luck Goblin or Good luck Hero based on initialize user choice
      switch(input)
      {//beginning of switch
         case 0: cout << "Good Luck, "<<userNm << endl; break;
         case 1: cout << "Good Luck, "<<userNm << endl; break;
      }//the end of the switch


   // Declare and initialize Hero skills and power parameters to zero
   int HeroHP = 0;//hero health
   int HeroDG = 0;//her damage and attack
   int HeroDF = 0;//hero defense and armor
   int HeroLF = 0; // hero life
   // Declare and initialize Goblin skills and power parameters to zero
   int GobliHP = 0;//Goblin health
   int GobliDG = 0;//Goblin damage and attack
   int GobliDF = 0;//Goblin defense and armor
   int GobliLF = 0; // Goblin life
   int matchRound = 1;

      //Seed the random function generation with current time
      srand(time(0));
      // Give goblin random health, attack, defence value 
      int randHP = rand()%6;
      GobliHP = randHP;
      int randDG = rand()%6;
      GobliDG = randDG;
      int randDF = rand()%6;
      GobliDF = randDF;

    //Give the hero random health, attack, defence value
      int randHP2=rand()%6;
      HeroHP=randHP2;
      int randDG2=rand()%6;
      HeroDG = randDG2;
      int randDF2=rand()%6;
      HeroDF = randDF2;


   //Beginning of the while loop
   while(isRunni)
    {
       // Armor Zone : If hero and goblin attack parameter is less than zero set it to zero
       if (HeroDG < 0)
        {
          HeroDG = 0;
       }
       if (GobliDG < 0)
       {
          GobliDG = 0;
       }

       // Life steal Zone : Assign Hero and Goblin life random  value
       float HeroLe = 0.0f;//hero life steal
       float GobliLe = 0.0f;//goblin life steal
       HeroLe  = rand()%6;
       GobliLe = rand()%6;

        cout << "Match round: " << matchRound << endl;

       //Display fight started
       cout<<"Fight Started:" << endl;

       //Calculate Hero and Goblin health based on attack, defence, life steal and initial health parameters
       HeroHP = HeroHP - GobliDG + HeroDF + HeroLe;
       GobliHP = GobliHP - HeroDG + GobliDF + GobliLe;

       //Calculate Hero and Goblin defence parameter based on defence and attack parameter
       HeroDF = HeroDF - GobliDG;
       GobliDF= GobliDF- HeroDG;

       //If Hero defence after Fight is less than zero set it to zero
       if (HeroDF<0)
        HeroDF=0;

    	//If Goblin defence after fight is less than zero set it to zero
       if (GobliDF<0)
        GobliDF=0;

    //Display health, Armor, Attack and Life steal at the end of round

       cout<<"Hero health: "<<HeroHP<<", Armor: "<<HeroDF<<" Attack: "<< HeroDG
                                         <<" Life steal: "<<HeroLe<<" "<<endl;
       cout<<"Goblin health: "<<GobliHP<<", Armor: "<<GobliDF<<" Attack: "
                            << GobliDG <<" Life steal: "<<GobliLe<<" " <<endl<<endl;

       // If either of Goblin or Hero health is less than or equal to zero after the fight, end the loop by setting isRunni to false
       if (HeroHP <= 0 || GobliHP <= 0)
    {
    	isRunni = false;
    	//If both Goblin and Hero Health is less than or equal to zero after the fight, set TieResult variable as true
       if (HeroHP <= 0 && GobliHP <= 0)
       {
             cout << "Hero and Goblin are equally powerful" << endl;
             tieResu=true;
       }
    
       }
       matchRound++;//Increment the counter for number of rounds




       if(matchRound>=10)// If match does not finish by Tenth round decide the winner based on health parameter only
       {
           cout << "Last Round fight without weapons " << endl;
           if(HeroHP>GobliHP)
           {
               GobliHP =0;
               isRunni=false;
           }
           else if (GobliHP>HeroHP)
           {
               HeroHP=0;
               isRunni=false;
           }
           else
           {
               GobliHP =0;
               HeroHP=0;
               isRunni=false;
               tieResu=true;
           }

       }

   }//end of the while loop

   if ( GobliHP <= 0 && HeroHP >= 1)
    {
		ofstream myfile;// write out to result.txt the result of the match
		myfile.open ("result.txt");
		myfile << "Winner: Hero!\n";
		myfile.close();
		if (is_hero==true)//Using initial user choice display the result whether user won or lost
		cout << "You won!";
		else
		cout << "You lost.";

   }
   else if ( HeroHP <= 0 && GobliHP >= 1 )
    {
      ofstream myfile;//write out to result.txt the result of the match
      myfile.open ("result.txt");
      myfile << "Winner: Goblin!\n";
      myfile.close();
      if (is_hero==false)//Using initial user choice display the result whether user won or lost
		cout << "You won!";
		else
		cout << "You lost.";
   }

   else if(tieResu==true)
   {
       ofstream myfile;//write out to result.txt the result of the match
      myfile.open ("result.txt");
      myfile << "Result is a tie\n";
      myfile.close();
      cout << "Result is a tie";

   }

   return 0;
}
