#ifndef TICTACTOE_RUELS_HPP
#define TICTACTOE_RULES_HPP

#include "Base.hpp"

class Rules
{
    public:
    States isWinner(States TheGame[3][3]);
};

#endif