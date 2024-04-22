#include <iostream>
#include "Visuals.hpp"

char Visuals::ToChar(States state)
{
    switch(state)
    {
        case 1:
        return 'X';
        break;
        case -1:
        return 'O';
        break;
        default:
        return ' ';
    }
}

void Visuals::printGameBoard(States theGame[3][3]) {
    {
        for(int p=0;p<19;p++)
            {
                std::cout<<"_";
            }
            std::cout<<std::endl;
        for(int i=0;i<3;i++)
        {
            std::cout<<"|  ";
            for(int j=0;j<3;j++)
            {
                std::cout<<Visuals::ToChar(theGame[i][j])<<"  |  ";
            }
            std::cout<<std::endl;
            for(int p=0;p<19;p++)
            {
                std::cout<<"-";
            }
            std::cout<<std::endl;
        }
    }
}