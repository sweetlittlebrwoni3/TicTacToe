#include "Input.hpp"


int Input::fromPlayer()
{
    std::string entry;
    int input;

    std::cout<<"Please enter the square number for your next move:"<<std::endl
        <<"(It should be a Number from 1 to 9)"<<std::endl;
    getline(std::cin,entry);

    try
    {
        input=std::stoi(entry);
    }
    catch(...)
    {}

    while(input>9 || input<1)
    {
        std::cout<<"What you entered is not valid"<<std::endl
            <<"Please enter a valid number:"<<std::endl;
        getline(std::cin,entry);

        try
        {
            input=std::stoi(entry);
        }
        catch(...)
        {}
    }

    return input;
}

bool Input::placeOnGameboard(States theBoard[3][3],int place,States choice)
{
    int row = (place-1) / 3;
    int col = (place-1) % 3;

    if(theBoard[row][col]==mt)
    {
        theBoard[row][col]=choice;
        return true;
    }

    std::cout<<"This spot is occupied!"<<std::endl;
    return false;
}