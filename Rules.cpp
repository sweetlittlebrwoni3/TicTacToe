#include "Rules.hpp"

bool thisRowIsComplete(States theRow[3])
{
    for(int i=1;i<3;i++)
    {
        if(theRow[i]!=theRow[0])
        {
            return false;
        }
    }
    return true;
}

States Rules::isWinner(States TheGame[3][3])
{
    States col[3];
    States hor[3];
    States nor[3];
    States row[3];

    for(int i=0;i<3;i++)
    {
        hor[i]=TheGame[i][i];
        nor[i]=TheGame[3-i][i];

        for(int j=0;j<3;j++)
        {
            row[j]=TheGame[i][j];
            col[j]=TheGame[j][i];
        }
        
        if(thisRowIsComplete(row))
        {
            return row[0];
        }
        if(thisRowIsComplete(col))
        {
            return col[0];
        }
    }

    if(thisRowIsComplete(hor))
    {
        return hor[0];
    }
    if(thisRowIsComplete(nor))
    {
        return nor[0];
    }

    return mt;
}