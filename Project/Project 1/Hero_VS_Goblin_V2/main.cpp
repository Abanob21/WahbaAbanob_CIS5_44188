                /* 
 * File:   main.cpp
 * author:Abanob Wahba
 * Created on April 14, 2017, 4:32 PM
 * Purpose: This game is a battels between 2 character you chose hero or goblin
 *  and see the round fighting and which champion win the final battels. 
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

   cout<<"Choose a Champion Hero or "<<endl;
   cin>>Hero;
   cout<<"Choose a name for your Champion:"<<endl;
   cin >> championName;
   cout<<"Choose a Goblin"<<endl; // ask for enemy
   cin>> Goblin;
   
   // Hero skills and powers
   int HeroHP = 25;//hero health
   int HeroDG = 5;//her damage and attack
   int HeroDF = 2;//hero defense and armor
   int HeroLif = 10; // hero life /*
   // Goblin skills and power
   int GobliHP = 23;//Goblin health
   int GobliDG = 8;//Goblin damage and attack
   int GoblinDF = 2;//Goblin defense and armor
   int GobliLF = 10; // Goblin life/*
   
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
   GobliHP = GobliHP - HeroDG + GoblinDF + GobliLe;
   
   if ( Goblin = 1 ) 
   if ( got != true) {
   HeroDG = 9;
      }
   if ( Hero >= 2 )
   if ( got = true ) {
      GobliDG = 11; 
   }
       
 
   
   cout << "New Round:" << endl;
   cout << "Hero health: "<< HeroHP<<", Armor: "<< HeroDF  <<" Attack: "<< 8 
                                      <<" Life steal: "<< HeroLe <<" " << endl;
   cout << "Goblin health: "<< GobliHP <<", Armor: "<< GoblinDF <<" Attack: "
                        << 8 <<" Life steal: "<< GobliLe <<" " << endl << endl;
   
   
   // Stop Game
   if (HeroHP < 0 || GobliHP < 0)
{
   if (HeroHP <= 0 && GobliHP <= 0) 
   cout << "Equality!" << endl;
   isRunni = false; 
   
}

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
