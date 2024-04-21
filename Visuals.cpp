#include<iostream>
#include<Visuals.hpp>

//using namespace std;



int PrintGameBoard(States theGame[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            std::cout<<theGame[i][j]<<"  |  ";
        }
        for(int p=0;p<17;p++)
        {
            std::cout<<"_";
        }
    }
}