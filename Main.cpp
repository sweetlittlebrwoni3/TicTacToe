#include<iostream>
#include "Visuals.hpp"
#include "Rules.hpp"
#include "Input.hpp"

int main()
{
    
    States theGame[3][3]={x,x,mt,mt,o,o,mt,mt,mt};
    Visuals v2{};
    v2.printGameBoard(theGame);
    Input v3{};

    v3.placeOnGameboard(theGame,v3.fromPlayer(),x);

    v2.printGameBoard(theGame);
    /*
    Rules v1{};
    std::cout<<v2.toChar(v1.isWinner(theGame),'0'+2)<<std::endl;
    */
    //std::cout<<v3.fromPlayer();
    
}