/* 
 * File:   main.cpp
 * author:
 * Created on April 15, 2017, 5:32 PM
 * Purpose: This game is a battels between 2 character hero and goblin you 
 * chose hero or goblin and see the round fighting and which champion win the 
 * final battels the computer will pick random number will determine the winer. 
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
    int isRunni = true;//the program keep running
    int Goblin;//Goblin monster
    int Hero;//hero of the game
    bool got = false;//Result , this is a boolean(bool) not integer (int), should start as false
    string championName = "";
    
   cout<<"Choose a Champion write a  Hero or Goblin"<<endl;
   cin>>Hero;
   cin>> Goblin;
   
   // Hero skills and powers
   int HeroHP = 0;//hero health
   int HeroDG = 0;//her damage and attack
   int HeroDF = 0;//hero defense and armor
   int HeroLF = 0; // hero life /*
   // Goblin skills and power
   int GobliHP = 0;//Goblin health
   int GobliDG = 0;//Goblin damage and attack
   int GobliDF = 0;//Goblin defense and armor
   int GobliLF = 0; // Goblin life/*
   int matchRound = 0;

    if ( Hero >= 2 ) {
      got = true;
      cout << "You have chosen goblin!" << endl;
   }
   
   else if ( got != true) {
      cout << "fight hard" <<championName<< endl;

      switch(Hero){//begging of switch
         case 0: cout << "Good Luck" << endl;
         case 1: cout << "The legendary fighters" << endl;
      }//the end of the switch


      // Give goblin random skills
      srand(time(0));
      int randHP = rand()%6;   // give random number for health to the goblin
      GobliHP = randHP;
      int randDG = rand()%6;   // give random number for attack to the goblin
      GobliDG = randDG;
      int randDF = rand()%6;   // give random number for defense to the goblin
      GobliDF = randDF;
      int randLF = rand()%6; // give random number for life to the goblin
      GobliLF = randLF;
    //give the hero random skills
      int randHP2=rand()%6;//give random number for health to the hero
      HeroHP=randHP2;
      int randDG2=rand()%6;//give random number for attack to the hero
      HeroDG = randDG2;
      int randDF2=rand()%6;//give random number for defense to the hero
      HeroDF = randDF2;
      int randLF2=rand()%6;//give random number for life to the hero
      HeroLF=randLF2;     
        
   }

   while(isRunni) {//begging of the while loop
   // Armor Zone
   if (HeroDG < 0) {
      HeroDG = 0;
   }
   if (GobliDG < 0) {
      GobliDG = 0; 
   }
 
   // Life steal Zone
   float HeroLe = 0.0f;//hero life steal
   float GobliLe = 0.0f;//goblin life steal
   HeroLe  = HeroHP / 7;
   GobliLe = HeroHP / 10;
   
   // Health Zone
   
   HeroHP = HeroHP - GobliDG + HeroDF + HeroLe;
   GobliHP = GobliHP - HeroDG + GobliDF + GobliLe;
   
   if ( Goblin = 1 ) 
   if ( got != true) {
   HeroDG = 9;
      }
   if ( Hero >= 2 )
   if ( got = true ) {
      GobliDG = 11; 
   }
       
 
   
   cout<<"start the fight:" << endl;
   cout<<"Hero health: "<<HeroHP<<", Armor: "<<HeroDF<<" Attack: "<< 8 
                                     <<" Life steal: "<<HeroLe<<" "<<endl;
   cout<<"Goblin health: "<<GobliHP<<", Armor: "<<GobliDF<<" Attack: "
                        <<8<<" Life steal: "<<GobliLe<<" " <<endl<<endl;
   
   
   // Stop Game
   if (HeroHP <= 0 || GobliHP <= 0)
{
   if (HeroHP <= 0 && GobliHP <= 0) 
   cout << "Equality!" << endl;
   isRunni = false; 
   
}
   matchRound++;
   HeroHP--; 
   GobliHP--; // random drain of HP

   cout << "Match round: " << matchRound << endl;

   }//end of the while loop
   if ( GobliHP <= 0 && HeroHP >= 1) {
      ofstream myfile;  // write out to result.txt the result of the match
      myfile.open ("result.txt");
      myfile << "Winner: Hero!\n";
      myfile.close();
      cout << "Winner: Hero!"; 
   }
   
   
   else if ( HeroHP <= 0 && GobliHP >= 1 ) {
      ofstream myfile;
      myfile.open ("result.txt");
      myfile << "Winner: Goblin!\n";
      myfile.close();
      cout << "Winner: Goblin!"; 
   }
   
   return 0;
}
