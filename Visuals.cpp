#include <iostream>
#include "Visuals.hpp"



void Visuals::printGameBoard(States theGame[3][3]) 
{
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
                std::cout<<Base::ToChar(theGame[i][j])<<"  |  ";
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