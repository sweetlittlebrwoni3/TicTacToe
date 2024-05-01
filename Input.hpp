#ifndef TICTACTOE_INPUT
#define TICTACTOE_INPUT

#include "Base.hpp"
#include <iostream>

class Input
{
    public:
    static int fromPlayer();
    static void placeOnGameboard (States theBoard[3][3],int place,States choice);
};

#endif