#include<iostream>
#include "Visuals.hpp"
#include "Rules.hpp"

int main()
{
    States theGame[3][3]={x,x,mt,mt,o,o,mt,mt,mt};
    Rules v1{};
    Visuals v2{};
    std::cout<<v2.toChar(v1.isWinner(theGame),'0'+2)<<std::endl;
    v2.printGameBoard(theGame);
}