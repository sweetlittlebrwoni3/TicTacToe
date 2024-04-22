enum States{
    x, o, mt
};

#ifndef TICTACTOE_VISUALS_HPP
#define TICTACTOE_VISUALS_HPP


class Visuals {
    public:
    static void printGameBoard(States theGame[3][3]);
    static char ToChar(States state);
};


#endif