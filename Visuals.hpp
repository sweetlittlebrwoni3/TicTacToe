#include<Visuals.cpp>

enum States
{
    x=1;
    o=-1;
    mt=0;
}

#ifndef TICTACTOE_VISUALS_H
#define TICTACTOE_VISUALS_H



class Visuals 
{
    States theGame;
    void Visuals(States theGame[3][3]);
}

#endif