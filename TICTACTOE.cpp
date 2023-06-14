// TICTACTOE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include "pick.h"

using namespace std; 


char token = 'x'; 
string player1="";
string player2="";
bool tie = false; 




int main()
{

    pick picking; 

   
        cout << "   LET'S PLAY TIC-TAC-TOE\n\n";
        cout << "Introduce yourself, player 1: ";
        cin >> player1;
        //getline(cin, player1); 

        cout << "\nIntroduce yourself, player 2: ";
        cin >> player2;
        //getline(cin, player2); 

        cout << endl;
        cout << player1 << " will play first.\n\n";
        cout << player2 << " will play second.\n\n";

        cout << endl;
        cout << endl;

        while (!picking.functionThree()) {
            picking.functionOne();
            picking.functionTwo();
            picking.functionThree();

        }

        if (token == 'x' && tie == false) {
            cout << player1 << " WINS!" << endl;
        }
        else if (token == 'x' && tie == false) {
            cout << player2 << " WINS!" << endl;
        }
        else {
            cout << " DRAW!" << endl;
        }
      
       cout << "\n"; 
    

    return 0; 
}


