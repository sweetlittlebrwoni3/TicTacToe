#include<iostream>
#include"Visuals.hpp"

int main()
{
    States theGame[3][3]={x,mt,mt,x,o,o,mt,mt,mt};
    Visuals v1{};
    v1.printGameBoard(theGame);
}