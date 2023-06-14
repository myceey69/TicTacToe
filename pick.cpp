#include <iostream>
#include "pick.h"

using namespace std; 

void pick::functionOne() {


    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
 



    cout << " " << "            |         |                  \n ";
    cout << "            |         |                  \n ";
    cout << "       " << zone[0][0] << "    |    " << zone[0][1] << "    |    " << zone[0][2] << "\n";
    cout << " " << "            |         |                  \n ";
    cout << "    ________|_________|________          \n ";
    cout << "            |         |                  \n ";
    cout << "            |         |                  \n ";
    cout << "       " << zone[1][0] << "    |    " << zone[1][1] << "    |    " << zone[1][2] << "\n";
    cout << " " << "            |         |                  \n ";
    cout << "    ________|_________|________          \n ";
    cout << "            |         |                  \n ";
    cout << "            |         |                  \n ";
    cout << "       " << zone[2][0] << "    |    " << zone[2][1] << "    |    " << zone[2][2] << "\n";
    cout << " " << "            |         |                  \n ";
    cout << "            |         |                  \n ";

    cout << "\n";
    cout << "\n";


}


void pick::functionTwo() {
    int number;

    if (token == 'x')
    {
        cout << " Player 1, please enter a #: ";
        cin >> number;
    }

    if (token == '0')
    {
        cout << " Player 2, please enter a #: ";
        cin >> number;
    }

    if (number == 1)
    {
        row = 0;
        column = 0;
    }


    if (number == 2)
    {
        row = 0;
        column = 1;
    }


    if (number == 3)
    {
        row = 0;
        column = 2;
    }


    if (number == 4)
    {
        row = 1;
        column = 0;
    }


    if (number == 5)
    {
        row = 1;
        column = 1;
    }


    if (number == 6)
    {
        row = 1;
        column = 2;
    }


    if (number == 7)
    {
        row = 2;
        column = 0;
    }


    if (number == 8)
    {
        row = 2;
        column = 1;
    }


    if (number == 9)
    {
        row = 2;
        column = 2;
    }
    else if (number < 1 || number > 9) {
        cout << "Enter a valid number!" << endl;
    }

    if (token == 'x' && zone[row][column] != 'x' && zone[row][column] != '0') {

        zone[row][column] = 'x';
        token = '0';
    }

    if (token == '0' && zone[row][column] != '0' && zone[row][column] != 'x') {

        zone[row][column] = '0';
        token = 'x';
    }
    else {
        cout << "NO EMPTY SPACE" << endl;
        functionTwo();
    }
    functionOne();
}

bool pick::functionThree() {
    for (int i{ 0 }; i < 3; i++)
    {
        if (zone[i][0] == zone[i][1] && zone[i][0] == zone[i][2] || zone[0][i] == zone[1][i] && zone[0][i] == zone[2][i])
            return true;
    }
    if (zone[0][0] == zone[1][1] && zone[1][1] == zone[2][2] || zone[0][2] == zone[1][1] && zone[1][1] == zone[2][0]) {
        return true;
    }


    for (int i{ 0 }; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            if (zone[i][j] != 'x' && zone[i][j] != '0')
            {
                return false;
            }
        }
    }
    tie = true;
    return false;
}


