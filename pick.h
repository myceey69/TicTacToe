#ifndef PICK_H
#define PICK_H

#include <iostream>
#include <iomanip>


class pick {

public: 
    void functionOne(); 

    void functionTwo(); 

    bool functionThree(); 


private: 

    char zone[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
    int row;
    int column;
    char token = 'x';
    //char token = '0';
    //std::string player1 = "";
    //std::string player2 = "";
    bool tie = false;
   
};


#endif

