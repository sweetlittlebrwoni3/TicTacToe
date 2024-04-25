#include "Base.hpp"

char Base::ToChar(States state)
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