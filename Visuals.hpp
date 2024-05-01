#ifndef TICTACTOE_VISUALS_HPP
#define TICTACTOE_VISUALS_HPP

#include "Base.hpp"

class Visuals
{
    public:
    static void printGameBoard(States theGame[3][3]);
    static char toChar(States state , int place);
};


#endif