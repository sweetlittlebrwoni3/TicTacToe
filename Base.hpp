

enum States
{
    x, o, mt
};

#ifndef TICTACTOE_BASE
#define TICTACTOE_BASE

class Base
{
    public:
    static char ToChar(States state);
};

#endif